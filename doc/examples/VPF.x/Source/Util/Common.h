#pragma once

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
// $Rev: 91790 $
// $Author: cmiller $
// $Date: 2015-12-02 17:48:50 -0700 (Wed, 02 Dec 2015) $

#include <string>
#include <vector>
#include <iomanip>
#include <random>
#include <systemc.h>
#include "ArrayLib/UtilityLib.h"

#define NEWIF       1
#define TASKADDR    0

#define	SUCCESS    (0)
#define	FAILURE	 (-1)

using sc_core::sc_time;

//! Prints out SystemC time everytime called.
std::ostream& coutf();

std::ostream& log(bool cond = true);

//! NAND interface command cycle constants.
//! @todo{These needs to moved to a proper place}
enum comMode { RD = 1, RDC = 2, PM = 3, PMC = 4, ER = 5, ERC = 6 };

// NAND Interface type
enum InterfaceType { ONFI, SIMPLE, SIMPLE_MEMORY };

// Program and garbage collection policy type
enum PolicyType { SINGLE_BLOCK, MULTI_BLOCK_SAME, MULTI_BLOCK_ARBIT };

int getRandInt(std::mt19937& mt, int a, int b);

int distGen(std::mt19937& mt, std::vector<double> dist);

// Stream operator for std::set
template<class T> std::ostream &operator<<(std::ostream &os, const std::set<T> &list) {
    std::streamsize width = os.width();

    for (auto& x : list) {
        os << std::setw(int(width)) << x << " ";
    }

    return os;
}

///////////////////////////////////////////////////////////////////////////////
// Command
///////////////////////////////////////////////////////////////////////////////

// This class implements the host level (sector level) commands to the SSD system. 
// Objects of this class are transmitted from module to module for implementing
// system functionality. Controller convert these commands into NAND Tasks.
class Command {

public:

    // Enum of host command types
    enum comType { IDLE = -1, READ = 0, WRITE = 1, DELETE = 2, OVERWRITE = 3 };

    // Enum of source types
    enum sourceType { HOST = 0, GC = 1 };

    // Host command type
    comType type;

    // Command address
    int addr;

    // Command value (If it is not defined, it is set to -1).
    int value;

    // Time stamp (This ensures no two commands are equal to each other)
    sc_time time;

    // Source of the task
    sourceType source;

    // Default constructor
    Command() : type(IDLE), addr(-1), value(-1), time(0, SC_NS), source(HOST) {}

    // Constructor
    Command(comType _type, int _addr, int _value, sc_time _time, sourceType _source)
        : type(_type), addr(_addr), value(_value), time(_time), source(_source) {}

    // Friend declarations
    friend std::ostream& operator<<(std::ostream& os, const Command& nand);
};

// Output stream operator
std::ostream& operator<<(std::ostream& os, const Command& nand);

// Operator==
bool operator==(const Command& left, const Command& right);

// Operator!=
bool operator!=(const Command& left, const Command& right);

// Output stream operator for comType
std::ostream& operator<<(std::ostream& os, const Command::comType& type);

// Output stream operator for sourceType
std::ostream& operator<<(std::ostream& os, const Command::sourceType& type);

// Trace function for Command type
void sc_trace(sc_trace_file *tf, const Command& com, const std::string& NAME);

// Operator<
bool operator<(const Command& left, const Command& right);


///////////////////////////////////////////////////////////////////////////////
// Task
///////////////////////////////////////////////////////////////////////////////

// This class implements the NAND level (page/block level) tasks to the SSD system. 
// Objects of this class are transmitted from module to module for implementing
// system functionality. Controller convert host Command packets into NAND Task objects.
class Task {

public:

    // Enum of Task types
    enum Type { IDLE = -1, READ = 0, PROG = 1, ERASE = 2, MULTI_READ = 3, MULTI_PROG = 4, MULTI_ERASE = 5 };

    // NAND task type
    Type type;

    // Task address
    int addr;

    // Time stamp (This ensures no two tasks are equal to each other, also enables Task stats)
    sc_time time;

    // Number of slots (This should be equal to par.nSlot)
    int nSlot;

    // Number of valid commands 
    int nCom;

    // Commands for the task
    std::vector<Command> commands;

    // Default constructor
    Task() : type(IDLE), addr(-1), time(0, SC_NS), nSlot(0), nCom(0) {}

    // Constructor
    Task(Type _type, int _addr, sc_time _time, int _nSlot)
        : type(_type), addr(_addr), time(_time), nSlot(_nSlot), commands(_nSlot), nCom(0) {}

    // Add a command to the task
    void add(const Command& com, int slotNum);

    // Get the number of valid commands
    int size() const;

    // Set page value
    void setValue(int pageVal);

    // Get page value
    int getValue();

    // Convert page value to sector values
    std::vector<int> pageToSector(int pageVal);

    // Convert sector values to page value
    int sectorToPage(const std::vector<int>& value);

    // Friend declarations
    friend std::ostream& operator<<(std::ostream& os, const Task& nand);
};

// Output stream operator
std::ostream& operator<<(std::ostream& os, const Task& nand);

// Operator==
bool operator==(const Task& left, const Task& right);

// Operator!=
bool operator!=(const Task& left, const Task& right);

// Output stream operator for comType
std::ostream& operator<<(std::ostream& os, const Task::Type& type);

// Trace function for Command type
void sc_trace(sc_trace_file *tf, const Task& com, const std::string& NAME);

// Operator<
bool operator<(const Task& left, const Task& right);

///////////////////////////////////////////////////////////////////////////////
// TaskMemory
///////////////////////////////////////////////////////////////////////////////

// Memory model
class TaskMemory {
public:
    int size;
    std::vector<Task> memory;

    int curAddr = 0;

    TaskMemory(int _size) : size(_size), memory(_size) {

    }

    int write(const Task& task) {
        bool isFound = false;
        int addr = -1;
        while (!isFound) {
            if (memory[curAddr] == Task()) {
                isFound = true;
                addr = curAddr;
                curAddr++;
            }
            else {
                curAddr++;
            }
            if (curAddr == size) {
                curAddr = 0;
            }
        }

        memory[addr] = task;

        //cout << "Mem address = " << addr << endl;
        return addr;
    }

    void del(int addr) {
        memory[addr] = Task();
    }

    Task& read(const int addr) {
        return memory[addr];
    }
};

extern TaskMemory  mem;

typedef int TaskAddr;

// These used for profiling
extern double _etime;
extern double _start;
void pstart();
void pend();
