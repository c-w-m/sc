//=============================================================================
// MICRON TECHNOLOGY CONFIDENTIAL and PROPIETARY
//-----------------------------------------------------------------------------
// All rights reserved under the copyright laws of the United States. Micron 
// Technology makes no warranty of any kind with regard to the use of this 
// software code, either expressed or implied, including but not limited to the
// implied warranties of merchantability or fitness for a particular task. This
// file may not be reproduced, modified, disclosed or otherwise used without 
// the express written permission of an authorized officer of Micron Technology.
//-----------------------------------------------------------------------------
// Copyright (c) 2015 by Micron Technology
//=============================================================================
// $Rev: 91550 $
// $Author: idemirkan $
// $Date: 2015-11-19 11:15:55 -0700 (Thu, 19 Nov 2015) $

#include "DataGen.h"
#include <random>
#include <functional>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
// DataGen functions
///////////////////////////////////////////////////////////////////////////////

DataGen::DataGen(Parameter _par)
    : par(_par),
    seed(0),
    mt(seed),
    valDice(0, 9),
    nSec(par.totalSec),
    fillPer(par.fillPer),
    dist(par.dist), d(1) {

    nAlloc = 0;
    nEmpty = nSec;
}

double DataGen::getFillPer() {
    return double(nAlloc) / nSec * 100;
}

vector<double> DataGen::getStat() {
    int totalOp = 0;
    totalOp = nRead + nWrite + nDelete + nOverwrite;

    vector<double> stat;
    stat.push_back(getFillPer());
    stat.push_back(totalOp);
    stat.push_back(double(nRead) / totalOp * 100);
    stat.push_back(double(nWrite) / totalOp * 100);
    stat.push_back(double(nDelete) / totalOp * 100);
    stat.push_back(double(nOverwrite) / totalOp * 100);
    stat.push_back(nRead);
    stat.push_back((nWrite + nOverwrite));

    // Reset counters
    nRead = 0;
    nWrite = 0;
    nDelete = 0;
    nOverwrite = 0;

    return stat;
}

///////////////////////////////////////////////////////////////////////////////
// RandSecGen functions
///////////////////////////////////////////////////////////////////////////////

RandSecGen::RandSecGen(Parameter _par)
    : DataGen(_par) {

    // Initialize sector lists
    allocSectors.resize(0);
    emptySectors.resize(nSec);
    for (unsigned i = 0; i < emptySectors.size(); i++) {
        emptySectors[i] = i;
    }
}

Command RandSecGen::getCommand() {
    Command::comType type;
    int addr;
    int value;

    // Determine command type
    if (getFillPer() < fillPer) {
        type = Command::WRITE;
    }
    else {
        type = static_cast<Command::comType>(distGen(mt, dist));
    }

    if (type == Command::READ) {
        // Check whether the drive is empty
        if (allocSectors.size() == 0) {
            cout << "*** ERROR: SSD is empty. Write some sectors before reading." << endl;
            exit(1);
        }

        // Get a random index of a programmed page
        int index = getRandInt(mt, 0, allocSectors.size() - 1);

        // Find the page address
        addr = allocSectors[index];

        // Increment the counter
        nRead++;

        //cout << "Reading " << addr << endl;

        // Set value to -1 for reads
        value = -1;
    }
    else if (type == Command::WRITE) {
        // Check whether the drive is full
        if (emptySectors.size() == 0) {
            cout << "*** ERROR: SSD is full. Erase some sectors before writing." << endl;
            exit(1);
        }

        // Get a random index of an empty page
        int index = getRandInt(mt, 0, emptySectors.size() - 1);

        // Find the page address
        addr = emptySectors[index];

        // Program operation
        allocSectors.push_back(addr);
        swap(emptySectors[index], emptySectors.back());
        emptySectors.pop_back();

        // Increment the counter
        nWrite++;
        nAlloc++;
        nEmpty--;

        // Get a random value
        value = valDice(mt);

        //cout << "Programming " << addr << endl;
        //cout << allocSectors << endl;
        //cout << emptySectors << endl;
    }
    else if (type == Command::DELETE) {
        // Check whether the drive is full
        if (allocSectors.size() == 0) {
            cout << "*** ERROR: SSD is empty. Write some sectors before deleting." << endl;
            exit(1);
        }

        // Get a random index of a written sector
        int index = getRandInt(mt, 0, allocSectors.size() - 1);

        // Find the sector address
        addr = allocSectors[index];

        // Program operation
        emptySectors.push_back(addr);
        swap(allocSectors[index], allocSectors.back());
        allocSectors.pop_back();

        // Increment the counter
        nDelete++;
        nAlloc--;
        nEmpty++;

        // Set value to -1 for reads
        value = -1;
    }
    else if (type == Command::OVERWRITE) {
        // Check whether the drive is full
        if (allocSectors.size() == 0) {
            cout << "*** ERROR: SSD is empty. Write some sectors before deleting." << endl;
            exit(1);
        }

        // Get a random index of a written sector
        int index = getRandInt(mt, 0, allocSectors.size() - 1);

        // Find the sector address
        addr = allocSectors[index];

        // Increment the counter
        nOverwrite++;

        // Get a random value
        value = valDice(mt);
    }

    return Command(type, addr, value, par.hostTxWaitTime, Command::HOST);
}

///////////////////////////////////////////////////////////////////////////////
// RandFileGen functions
///////////////////////////////////////////////////////////////////////////////

// Constructor
RandFileGen::RandFileGen(Parameter _par)
    : DataGen(_par),
    fileTimeGen(1.0 / (par.fileGen_meanFileTime.to_seconds() * 1000 + 1)) {

    emptyRange.push(Range(0, nSec - 1));
}

// Command manager
Command RandFileGen::getCommand() {

    if (comQueue.size() == 0) {

        // Determine file operation type
        Command::comType type;
        if (getFillPer() < fillPer) {
            type = Command::WRITE;
        }
        else {
            type = static_cast<Command::comType>(distGen(mt, dist));
        }

        if (type == Command::READ) {
            // Check whether the drive is empty
            if (nAlloc == 0) {
                cout << "*** ERROR: SSD is empty. Write some files before reading." << endl;
                exit(1);
            }

            // Get a random file
            int addr = getRandInt(mt, 0, files.size() - 1);

            // Generate commands for the read
            readFile(addr);
        }
        else if (type == Command::WRITE) {
            // Check whether the drive is full
            if (nEmpty == 0) {
                cout << "*** ERROR: SSD is full. Erase some sectors before writing." << endl;
                exit(1);
            }

            // Get a uniform file size (in sectors)
            int size = getRandInt(mt, 1, par.fileGen_maxFileSize);

            // Generate commands for the write
            writeFile(size);
        }
        else if (type == Command::DELETE) {
            // Check whether the drive is full
            if (nAlloc == 0) {
                cout << "*** ERROR: SSD is empty. Write some sectors before deleting." << endl;
                exit(1);
            }

            // Get a random written file
            int addr = getRandInt(mt, 0, files.size() - 1);

            // Generate commands for the delete
            deleteFile(addr);
        }
        else if (type == Command::OVERWRITE) {
            // Check whether the drive is full
            if (nEmpty == 0) {
                cout << "*** ERROR: SSD is full. Erase some sectors before writing." << endl;
                exit(1);
            }

            // Get a random written file
            int addr = getRandInt(mt, 0, files.size() - 1);

            // Generate commands for the delete
            overwriteFile(addr);
        }

        // Replace the last queue element time by interfile time
        Command& com = comQueue.back();
        com.time += sc_time(fileTimeGen(mt), SC_MS);
        //cout << "Commands generated: size = " << comQueue.size() << " wait = " << com.time << endl;
    }

    Command com = comQueue.front();
    comQueue.pop();

    if (com.type == Command::READ) {
        nRead++;
    }
    else if (com.type == Command::WRITE) {
        nWrite++;
    }
    else if (com.type == Command::DELETE) {
        nDelete++;
    }
    else if (com.type == Command::OVERWRITE) {
        nOverwrite++;
    }

    return com;
}


// Read a file
void RandFileGen::readFile(int addr) {
    // Get the file reference
    File& file = files[addr];

    // Create commands
    for (unsigned i = 0; i < file.ranges.size(); i++) {
        for (int j = file.ranges[i].start; j <= file.ranges[i].end; j++) {
            comQueue.push(
                Command(Command::READ, j, -1, par.fileGen_minComTime, Command::HOST));
        }
    }
}

// Create a file
void RandFileGen::writeFile(int size) {
    File temp(size);

    // Check the size
    if (size > nEmpty) {
        cout << "File System Error: Disk cannot allocated the space for the file requested" << endl;
        exit(1);
    }

    // Allocate sectors for the file
    bool isDone = false;
    int rem = size;
    while (!isDone) {
        Range& ran = emptyRange.front();
        if (rem > ran.size()) {
            temp.ranges.push_back(ran);
            rem -= ran.size();
            emptyRange.pop();
        }
        else {
            temp.ranges.push_back(Range(ran.start, ran.start + rem - 1));
            ran.start += rem;
            if (ran.size() == 0) {
                emptyRange.pop();
            }
            isDone = true;
        }
    }

    // Update the counters
    nEmpty -= size;
    nAlloc += size;

    // Create commands
    for (unsigned i = 0; i < temp.ranges.size(); i++) {
        for (unsigned j = temp.ranges[i].start; j <= (unsigned)temp.ranges[i].end; j++) {
            comQueue.push(
                Command(Command::WRITE, j, valDice(mt), par.fileGen_minComTime, Command::HOST));
        }
    }

    // Push the files into the file list
    files.push_back(temp);
}

// Delete a file
void RandFileGen::deleteFile(int addr) {
    // Get the file reference
    File file = files[addr];

    // Free sectors occupied by the file
    for (unsigned i = 0; i < file.ranges.size(); i++) {
        emptyRange.push(file.ranges[i]);
    }

    // Update the counters
    nEmpty += file.size;
    nAlloc -= file.size;

    // Swap the file with last element, and then pop the last element
    files[addr] = files.back();
    files.pop_back();

    // Create the commands
    for (unsigned i = 0; i < file.ranges.size(); i++) {
        for (int j = file.ranges[i].start; j <= file.ranges[i].end; j++) {
            comQueue.push(
                Command(Command::DELETE, j, -1, par.fileGen_minComTime, Command::HOST));
        }
    }
}

// Overwriting a file
void RandFileGen::overwriteFile(int addr) {
    // Get the file reference
    File& file = files[addr];

    // Create commands
    for (unsigned i = 0; i < file.ranges.size(); i++) {
        for (int j = file.ranges[i].start; j <= file.ranges[i].end; j++) {
            comQueue.push(
                Command(Command::OVERWRITE, j, valDice(mt), par.fileGen_minComTime, Command::HOST));
        }
    }
}

std::ostream& operator<<(std::ostream& os, const RandFileGen& fs) {
    return os;
}

///////////////////////////////////////////////////////////////////////////////
// TestGen functions
///////////////////////////////////////////////////////////////////////////////

TestGen::TestGen(Parameter _par)
    : DataGen(_par) {
    // Fill up the NAND
    for (int i = 0; i < 8; i++) {
        coms.push_back(Command(Command::WRITE, i, i % 10, sc_time(100, SC_US), Command::HOST));
    }
//    for (int i = 0; i < 64; i++) {
//       coms.push_back(Command(Command::OVERWRITE, i, (i+1) % 10, sc_time(400, SC_US), Command::HOST));
//    }
//    for (int i = 0; i < 8; i++) {
//       coms.push_back(Command(Command::OVERWRITE, i, (i + 1) % 10, sc_time(400, SC_US), Command::HOST));
//    }
//    for (int i = 0; i < 16; i++) {
//       coms.push_back(Command(Command::READ, i, -1, sc_time(400, SC_US), Command::HOST));
//    }

    //coms.push_back(Command(Command::READ, 1, -1, sc_time(100, SC_US), Command::HOST));
    //for (int i = 4; i < 24; i++) {
   //    coms.push_back(Command(Command::OVERWRITE, i, (i)%10, sc_time(100, SC_US), Command::HOST));
    //}


    //for (int i = 0; i<16; i++) {
    //   coms.push_back(Command(Command::READ, i, -1, sc_time(100, SC_US), Command::HOST));
    //}

 //   coms.push_back(Command(Command::READ, 6, -1, sc_time(100, SC_US), Command::HOST));
 //   coms.push_back(Command(Command::WRITE, 7, 7, sc_time(100, SC_US), Command::HOST));
 //   coms.push_back(Command(Command::DELETE, 0, 0, sc_time(100, SC_US), Command::HOST));
    coms.push_back(Command(Command::IDLE, -1, -1, sc_time(1, SC_SEC), Command::HOST));
    index = 0;
}

Command TestGen::getCommand() {
    return coms[index++];
}
