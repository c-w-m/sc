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
#include "Host.h"
#include <random>
#include <functional>
#include <queue>


struct HostInterface : sc_core::sc_module {
    SC_HAS_PROCESS(HostInterface);

    Parameter par;

    int verbose;

    sc_in<bool> CTRL_READY;
    sc_in<bool> HOST_READY;
    sc_out<bool> HI_TX_QUEUE_FULL;
    sc_out<bool> HI_TX_QUEUE_EMPTY;
    sc_out<bool> HI_RX_QUEUE_FULL;
    sc_out<bool> HI_RX_QUEUE_EMPTY;

    // TX path goes from Host to Controller
    // RX path goes from Controller to Host
    sc_in<Command> txComIn;
    sc_out<Command> txComOut;
    sc_in<Command> rxComIn;
    sc_out<Command> rxComOut;

    std::queue<Command> txQueue;
    std::queue<Command> rxQueue;

    void txInput();
    void txOutput();
    void rxInput();
    void rxOutput();

    HostInterface(sc_module_name _name, Parameter _par);
};

