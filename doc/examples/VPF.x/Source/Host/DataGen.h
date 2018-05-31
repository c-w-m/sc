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

#pragma once

#include "../Util/Common.h"
#include "../NAND/NAND.h"
#include <random>
#include <functional>
#include <queue>


// DataGen base class for all data generator classes
class DataGen {

protected:

    // Parameters
    Parameter par;

    // Total number of sectors
    int nSec;

    // Fill percent
    int fillPer;

    // Random number generator seed
    int seed;

    // Random engine
    std::mt19937 mt;

    // Distribution of commands
    std::vector<double> dist;

    // Preconfigured uniform integer generator for sector values
    std::uniform_int_distribution<int> valDice;

    // Exponential distribution
    std::exponential_distribution<double> d;

    // Logical space stat variables
    int nRead = 0;
    int nWrite = 0;
    int nDelete = 0;
    int nOverwrite = 0;

    int nAlloc;
    int nEmpty;

public:

    // Constructor
    DataGen(Parameter _par);

    // Destructor
    virtual ~DataGen() {}

    // Generates the next command
    virtual Command getCommand() = 0;

    // Computes the logical fill percentage
    double getFillPer();

    // Computes logical space stats
    std::vector<double> getStat();
};


// Random sector generator class
class RandSecGen : public DataGen {

private:

    // Vector of written sectors
    std::vector<int> allocSectors;

    // Available sectors to write
    std::vector<int> emptySectors;

public:

    // Constructor
    RandSecGen(Parameter _par);

    // Generates the next command
    Command getCommand();
};

// File class used by RandFileGen class
class File {
public:
    // Size of the file (in sectors)
    int size;

    // Ranges of sector indexes where the file spans
    std::vector<Range> ranges;

    // Constructor
    File(int _size) : size(_size) {}
};

class RandFileGen : public DataGen {

    // Vector of files
    std::vector<File> files;

    // Available sectors to write
    std::queue<Range> emptyRange;

    // Command vector
    std::queue<Command> comQueue;

    // Geometric distribution modeling interfile time
    std::geometric_distribution<int> fileTimeGen;

public:

    // Constructor
    RandFileGen(Parameter _par);

    // Command manager
    Command getCommand();

    // Read a file
    void readFile(int addr);

    // Create a file
    void writeFile(int size);

    // Delete a file
    void deleteFile(int addr);

    // Overwriting a file
    void overwriteFile(int addr);
};

// Friend declarations
std::ostream& operator<<(std::ostream& os, const RandFileGen& nand);


// Random sector generator class
class TestGen : public DataGen {

private:

    // Test command vector
    std::vector<Command> coms;

    // Command index
    int index;

public:

    // Constructor
    TestGen(Parameter _par);

    // Generates the next command
    Command getCommand();
};
