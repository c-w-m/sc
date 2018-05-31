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

#include "Host.h"
#include <random>
#include <functional>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
// Host functions
///////////////////////////////////////////////////////////////////////////////

Host::Host(sc_module_name _name, Parameter _par) 
    : sc_module(_name), 
    par(_par), 
    nSec(par.totalSec), 
    validation(par.validation) {

    if (par.dataGenName == "RandSecGen") {
        dataGen = new RandSecGen(par);
    }
    else if (par.dataGenName == "RandFileGen") {
        dataGen = new RandFileGen(par);
    }
    else if (par.dataGenName == "TestGen") {
        dataGen = new TestGen(par);
    }
    else {
        cout << "Host: ERROR: Invalid data generator = " 
             << par.dataGenName << endl;
    }

    // Initialize the sector data for validation
    if (validation) {
        sectors.resize(nSec, Sector(-1, sc_time(0, SC_NS)));
    }

    SC_THREAD(transmit);
    //sensitive << HI_READY.pos();
    SC_THREAD(receive);
    sensitive << rxComIn;
}

Host::~Host() {
    delete dataGen;
}

void Host::transmit() {
    while (true) {
        if (HI_TX_QUEUE_FULL == false) {
            Command com = dataGen->getCommand();
            if (par.hostVerbose == 1) {
                coutf() << "HOST_TX   : " << com << endl;
            }
            sc_time waitTime = com.time;
            com.time = sc_time_stamp();
            txComOut = com;
            nSent++;

            // Register the command to the sector table
            if (validation) {
                if (com.type != Command::IDLE) {
                    sectors[com.addr].time = com.time;
                    sectors[com.addr].value = com.value;
                }
            }

            wait(waitTime);
            //coutf() << "Host   : Waked up from the sleep " << endl;
        }
        else {
            //coutf() << "Host   : Waiting for queue event " << endl;
            wait(HI_TX_QUEUE_FULL.negedge_event());
            //coutf() << "Host   : Got the notification " << endl;
        }
    }
}

void Host::receive() {
    while (true) {
        if (HI_RX_QUEUE_EMPTY == 0) {
            // Initiate read sequence
            HOST_READY.write(0);
            wait(par.hostRxClockPer / 2);
            HOST_READY.write(1);
            wait(par.hostRxClockPer / 2);

            // Read the command
            Command com = rxComIn.read();
            if (com.type != Command::IDLE) {
                nReceived++;
            }
            if (par.hostVerbose == 1) {
                coutf() << "HOST_RX   : " << com << endl;
            }
            if (validation && com.type == Command::READ) {
                if (com.time > sectors[com.addr].time && sectors[com.addr].value != com.value) {
                    coutf() << "Host : ERROR : Read value does not match the written value" << endl;
                    coutf() << "Host : Written = " << sectors[com.addr].value << " vs. Read = " << com.value << endl;
                    coutf() << "Host : Written time = " << sectors[com.addr].time << " vs. Read time = " << com.time << endl;
                }
            }
            if (nReceived > nSent) {
                cout << "Stop here" << endl;
            }
        }
        else {
            //coutf() << "Host RX: Waiting for packet to arrive " << endl;
            wait(HI_RX_QUEUE_EMPTY.negedge_event());
        }
    }
}

double Host::getFillPer() {
    return dataGen->getFillPer();
}

vector<double> Host::getStat() {
    vector<double> stat = dataGen->getStat();
    stat.push_back(nSent - nReceived);
    return stat;
}
