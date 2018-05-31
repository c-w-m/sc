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

#include "HostInterface.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
// HostInterface functions
///////////////////////////////////////////////////////////////////////////////

HostInterface::HostInterface(sc_module_name _name, Parameter _par)
    : sc_module(_name), par(_par), verbose(par.HI_verbose) {
    SC_METHOD(txInput);
    sensitive << txComIn;
    SC_METHOD(txOutput);
    sensitive << CTRL_READY.pos();

    SC_METHOD(rxInput);
    sensitive << rxComIn;
    SC_METHOD(rxOutput);
    sensitive << HOST_READY.pos();
}

void HostInterface::txInput() {
    // Push the command into the queue
    Command com = txComIn;
    txQueue.push(com);
    //if (verbose == 1) {
    //   coutf() << "HI_TX(" << setw(2) << txQueue.size() << ") : Input = " << com << endl;
    //}
    HI_TX_QUEUE_EMPTY = 0;
    if (txQueue.size() == par.HI_bufferCap) {
        HI_TX_QUEUE_FULL = 1;
        //coutf() << "HI TX(" << setw(2) << txQueue.size() << ") Queue is full" << endl;
    }
}

void HostInterface::txOutput() {
    // Set the output value and pop the command from the queue
    Command com = txQueue.front();
    txQueue.pop();
    txComOut = com;
    if (verbose == 1) {
        coutf() << "HI_TX(" << setw(2) << txQueue.size() << ") : Output = " << com << endl;
    }
    HI_TX_QUEUE_FULL = 0;
    if (txQueue.size() == 0) {
        HI_TX_QUEUE_EMPTY = 1;
    }
    //coutf() << "HI: Host is notified" << endl;
}

void HostInterface::rxInput() {
    // Push the command into the queue
    Command com = rxComIn;
    rxQueue.push(com);
    if (verbose == 1) {
        coutf() << "HI_RX(" << setw(2) << rxQueue.size() << ") : Input = " << com << endl;
    }
    HI_RX_QUEUE_EMPTY = 0;
    if (rxQueue.size() == par.HI_bufferCap) {
        HI_RX_QUEUE_FULL = 1;
        //coutf() << "HI RX: Queue is full " << endl;
    }
}

void HostInterface::rxOutput() {
    // Set the output value and pop the command from the queue
    Command com = rxQueue.front();
    rxQueue.pop();
    rxComOut = com;
    if (verbose == 1) {
        coutf() << "HI_RX(" << setw(2) << rxQueue.size() << ") : Output = " << com << endl;
    }
    HI_RX_QUEUE_FULL = 0;
    if (rxQueue.size() == 0) {
        HI_RX_QUEUE_EMPTY = 1;
        //coutf() << "HI RX: Queue is empty " << endl;
    }
}
