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
// $Rev: 91851 $
// $Author: idemirkan $
// $Date: 2015-12-04 10:20:41 -0700 (Fri, 04 Dec 2015) $

#include "Common.h"

#define SIMPLE_VIEW 1

using namespace std;

ostream& coutf() {
    sc_time time = sc_time_stamp();
#if 1
    cout << setw(7) << time << " | ";
#else
    double sec = time.to_seconds();
    cout << std::setw(8) << fixed << setprecision(0) << sec*1e9 << " | ";
#endif

    return cout;
}

ostream& log(bool cond) {
    if (cond == false) {
        clog.setstate(ios_base::failbit);
    }
    else {
        clog.clear();
    }

    sc_time time = sc_time_stamp();
#if 1
    clog << setw(7) << time << " | ";
#else
    double sec = time.to_seconds();
    clog << std::setw(8) << fixed << setprecision(0) << sec*1e9 << " | ";
#endif

    return clog;
}

int getRandInt(mt19937& mt, int a, int b) {
    uniform_int_distribution<int> dice(a, b);
    return dice(mt);
}

int distGen(std::mt19937& mt, vector<double> dist) {
    uniform_real_distribution<> dice(0, 100);
    double base = 0;
    double num = dice(mt);
    int index = 0;
    for (unsigned i = 0; i < dist.size(); i++) {
        if (base <= num && num < base + dist[i]) {
            index = i;
            break;
        }
        else {
            base = base + dist[i];
        }
    }

    return index;
}


///////////////////////////////////////////////////////////////////////////////
// Command functions
///////////////////////////////////////////////////////////////////////////////

ostream& operator<<(ostream& os, const Command& com) {
    os << "[" << com.type;
    if (com.type == Command::IDLE) {
        os << ", ";
    }
    else if (com.type == Command::DELETE) {
        os << " @" << com.addr << ", ";
    }
    else {
        os << " @" << com.addr << " = " << com.value << ", ";
    }
#if SIMPLE_VIEW
    os << "]";
#else
    os << com.time << ", " << com.source << "]";
#endif
    return os;
}

bool operator==(const Command& left, const Command& right) {
    return (left.type == right.type && left.addr 
        == right.addr && left.value == right.value && left.time == right.time);
}

bool operator!=(const Command& left, const Command& right) {
    return !(left.type == right.type && left.addr == right.addr && left.value 
        == right.value && left.time == right.time);
}

void sc_trace(sc_trace_file *tf, const Command& com, const string& NAME) {
    sc_trace(tf, com.type, NAME + ".type");
    sc_trace(tf, com.addr, NAME + ".addr");
    sc_trace(tf, com.value, NAME + ".value");
}

std::ostream& operator<<(std::ostream& os, const Command::comType& type) {
    switch (type) {
    case Command::IDLE: os << "IDLE"; break;
    case Command::READ: os << "READ"; break;
    case Command::WRITE: os << "WRITE"; break;
    case Command::DELETE: os << "DELETE"; break;
    case Command::OVERWRITE: os << "OVERWRITE"; break;
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const Command::sourceType& type) {
    switch (type) {
    case Command::HOST: os << "HOST"; break;
    case Command::GC: os << "GC"; break;
    }
    return os;
}

bool operator<(const Command& left, const Command& right) {
    return (left.time < right.time);
}

///////////////////////////////////////////////////////////////////////////////
// Task functions
///////////////////////////////////////////////////////////////////////////////

void Task::add(const Command& com, int slotNum) {
    commands[slotNum] = com;
    nCom++;
}

int Task::size() const {
    return nCom;
}

void Task::setValue(int pageVal) {
    std::vector<int> secVal = pageToSector(pageVal);
    for (int i = 0; i < nSlot; i++) {
        if (commands[i] != Command()) {
            commands[i].value = secVal[i];
        }
    }
}

int Task::getValue() {
    std::vector<int> secVal(nSlot);
    for (int i = 0; i < nSlot; i++) {
        if (commands[i] != Command()) {
            secVal[i] = commands[i].value;
        }
    }
    return sectorToPage(secVal);
}

std::vector<int> Task::pageToSector(int pageVal) {
    std::vector<int> secVal(nSlot);
    for (int i = 0; i < nSlot; i++) {
        secVal[i] = pageVal % 10;
        pageVal = (pageVal - secVal[i]) / 10;
    }
    return secVal;
}

int Task::sectorToPage(const std::vector<int>& value) {
    int pageValue = 0;
    for (int i = nSlot - 1; i >= 0; i--) {
        pageValue += value[i];
        if (i != 0) {
            pageValue *= 10;
        }
    }
    return pageValue;
}

ostream& operator<<(ostream& os, const Task& com) {
    if (com.type == Task::IDLE) {
        os << "(" << com.type;
    }
    else {
        os << "(" << com.type << " @" << com.addr;
    }
#if SIMPLE_VIEW
    os << ")";
#else
    os << ", " << com.time << ")";
#endif

    for (unsigned i = 0; i < com.commands.size(); i++) {
       if (com.commands[i]!=Command()){
          os << " [" << i << "]: " << com.commands[i];
       }
    }
    return os;
}

bool operator==(const Task& left, const Task& right) {
    return (left.time == right.time && left.type 
        == right.type && left.addr == right.addr);
}

bool operator!=(const Task& left, const Task& right) {
    return !(left.time == right.time && left.type 
        == right.type && left.addr == right.addr);
}

void sc_trace(sc_trace_file *tf, const Task& com, const string& NAME) {
    sc_trace(tf, com.type, NAME + ".type");
    sc_trace(tf, com.addr, NAME + ".addr");
}

std::ostream& operator<<(std::ostream& os, const Task::Type& type) {
    switch (type) {
    case Task::IDLE: os << "IDLE"; break;
    case Task::READ: os << "READ"; break;
    case Task::PROG: os << "PROG"; break;
    case Task::ERASE: os << "ERASE"; break;
   case Task::MULTI_READ: os << "MULTI_READ"; break;
   case Task::MULTI_PROG: os << "MULTI_PROG"; break;
   case Task::MULTI_ERASE: os << "MULTI_ERASE"; break;
    }
    return os;
}

bool operator<(const Task& left, const Task& right) {
    return (left.time < right.time);
}

///////////////////////////////////////////////////////////////////////////////
// TaskMemory functions
///////////////////////////////////////////////////////////////////////////////

TaskMemory mem(10);

///////////////////////////////////////////////////////////////////////////////
// Profiling functions
///////////////////////////////////////////////////////////////////////////////

double _etime = 0;

double _start = 0;

void pstart() {
    _start = sys::getTime();
}

void pend() {
    _etime += sys::getTime() - _start;
}
