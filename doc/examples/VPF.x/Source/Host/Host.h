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
// $Rev: 91783 $
// $Author: idemirkan $
// $Date: 2015-12-02 16:42:09 -0700 (Wed, 02 Dec 2015) $

#pragma once

#include "../Util/Common.h"
#include "../NAND/NAND.h"
#include "DataGen.h"
#include <random>
#include <functional>
#include <queue>

// Sector class used for the validation of the system
class Sector {
public:
    // Address
    int addr;

    // Value
    int value;

    // Time stamp for modification
    sc_time time;

    // Constructor
    Sector(int _value, sc_time _time) : addr(0), value(_value), time(_time) {}

    // Write a new value to the sector
    void write(int newValue, sc_time newTime) {
        value = newValue;
        time = newTime;
    }

    // Delete the sector
    void del(sc_time newTime) {
        value = -1;
        time = newTime;
    }
};


//! @class              Host
//!
//! @brief              Host class implementing sector data generator.
//!
//! @details            This class implements random read/write/overwrite/delete sector operations.

class Host : sc_core::sc_module {
    SC_HAS_PROCESS(Host);

private:

    // Data generator
    DataGen *dataGen;

    // Copy of parameters
    Parameter par;

    // Total number of sectors
    int nSec;

    // Generates the next command
    Command getCommand();

    // Number of sent commands
    int nSent = 0;

    // Number of received commands
    int nReceived = 0;

    // Indicates validation is enabled or not
    bool validation;

    // Sector vector used for validation. (Usually it allocates large amount of data.)
    std::vector<Sector> sectors;

public:

    // Input ports
    sc_in<Command> rxComIn;
    sc_in<bool> HI_TX_QUEUE_FULL;
    sc_in<bool> HI_RX_QUEUE_EMPTY;

    // Output ports
    sc_out<Command> txComOut;
    sc_out<bool> HOST_READY;

    // Constructor
    Host(sc_module_name _name, Parameter _par);

    // Destructor
    ~Host();

    // Computes the logical fill percentage
    double getFillPer();

    // Computes logical space stats
    std::vector<double> getStat();

    // Transmits commands (SC_THREAD)
    void transmit();

    // Receives commands (SC_THREAD)
    void receive();
};
