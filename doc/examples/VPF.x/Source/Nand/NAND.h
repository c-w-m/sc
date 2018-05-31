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
// $Rev: 91855 $
// $Author: idemirkan $
// $Date: 2015-12-04 16:15:56 -0700 (Fri, 04 Dec 2015) $
//
//! @defgroup     NAND NAND
//! @brief        NAND storage and interface classes

#pragma once

#include "../Util/Common.h"
#include "../Sim/CAS-1.0.0/Parameter.h"

//! @ingroup            NAND
//!
//! @brief              NAND Block class
//!
//! @details            This class implements block features of a NAND die.
//!
//! @author             Ismail Demirkan (idemirkan@micron.com)
//! @date               2015-11-11
//! @version            2015-11-11 (demirkan): Initial implementation.

class Block {
private:
    //! Erase state value
    enum { ERASE_STATE = -1 };

    //! Number of pages
    int nPage;

    //! Page size in bytes
    int pageSize;

    //! Internal data storage
    std::vector<int> pages;

public:

    //! Constructor
    Block(int _nPage, int _pageSize);

    //! Capacity of the block in terms of number of pages
    int getCapacity();

    //! Capacity of the block in terms of bytes
    int getSize();

    //! Read a page
    int readPage(int addr);

    //! Program a page
    void progPage(int addr, int val);

    //! Erase the block
    void erase();

    //! Friend declarations
    friend std::ostream& operator<<(std::ostream& os, Block& nand);
};

//! Output stream operator for Block class
std::ostream& operator<<(std::ostream& os, Block& nand);

//! @ingroup            NAND
//!
//! @brief              NAND Plane class
//!
//! @details            This class implements planes features of a NAND die.
//!
//! @author             Ismail Demirkan (idemirkan@micron.com)
//! @date               2015-11-11
//! @version            2015-11-11 (demirkan): Initial implementation.

class Plane {
private:

    //! The number of blocks inside the plane
    int nBlock;

    //! The number of pages inside each block
    int nPage;

    //! Page size in bytes
    int pageSize;

    //! Internal data storage
    std::vector<Block> blocks;

public:

    //! Constructor
    Plane(int _nBlock, int _nPage, int _pageSize);

    //! Capacity of Plane in terms of number of pages
    int getCapacity();

    //! Capacity of Plane in terms of bytes
    int getSize();

    //! Read a page (Page addresses are aggreagated)
    int readPage(int addr);

    //! Program a page (Page addresses are aggreagated)
    void progPage(int addr, int val);

    //! Erase a block
    void eraseBlock(int addr);

    //! Friend declarations
    friend std::ostream& operator<<(std::ostream& os, Plane& nand);
};

//! Output stream operator for Plane class
std::ostream& operator<<(std::ostream& os, Plane& nand);

//! @ingroup            NAND
//!
//! @brief              LUN class
//!
//! @details            This class implements a single NAND die.
//!
//! @author             Ismail Demirkan (idemirkan@micron.com)
//! @date               2015-11-11
//! @version            2015-11-11 (demirkan): Initial implementation.

class LUN {
private:

    //! The number of planes
    int nPlane;

    //! The number of blocks inside each plane
    int nBlock;

    //! The number of pages inside each block
    int nPage;

    //! Page size in bytes
    int pageSize;

    // Internal data storage
    std::vector<Plane> planes;

public:

    //! Constructor
    LUN(int _nPlane, int _nBlock, int _nPage, int _pageSize);

    //! Capacity of LUN in terms of number of pages
    int getCapacity();

    //! Capacity of LUN in terms of bytes
    int getSize();

    //! Read a page (Page addresses are aggreagated)
    int readPage(int addr);

    //! Program a page (Page addresses are aggreagated)
    void progPage(int addr, int val);

    //! Erase a block (Block addresses are aggreagated)
    void eraseBlock(int addr);

    //! Friend declarations
    friend std::ostream& operator<<(std::ostream& os, LUN& nand);
};

//! Output stream operator for LUN class
std::ostream& operator<<(std::ostream& os, LUN& nand);

//! @ingroup            NAND
//!
//! @brief              NAND module
//!
//! @details            This module implements storage and interface of a NAND flash memory.
//!                     The following input output ports are belong to NAND interface.
//!
//! @port{in}           Input port. 
//! @port{out}          Output port. 
//!
//! @author             Ismail Demirkan (idemirkan@micron.com)
//! @date               2015-11-11
//! @version            2015-11-11 (demirkan): Initial implementation.

class NAND : sc_core::sc_module {
    SC_HAS_PROCESS(NAND);

    //! Interface operation modes
    enum operMode { IDLE, READ, PROG, ERASE };

    //! Interface operation cycles
    enum cycleType { RDY, COM, ADR, CFM, DIN, DOUT, BUSY };

    //! Simulator parameter structure passed down
    Parameter par;

    //! Internal data storage
    std::vector<LUN> LUNs;

    //! Current operation mode of the interface
    operMode mode;

    //! Current cycle mode of the interface
    cycleType cycle;

    //! Current address used in the interface
    int addr;

    //! Current page value used in the interface
    int value;

    //! Verbosity level. 0 = quiet, 1 = interface and control messages
    const int verbose;

    //! Wait for one cycle (Actual waiting time period is controlled by interface clock rate)
    void waitCycle(double nCycle);

    //! Implements read operation of the interface
    void readOper();

    //! Implements program operation of the interface
    void progOper();

    //! Implements erase operation of the interface
    void eraseOper();

    double comOverheadTime;
    double pageTransTime;
    double slotTransTime;

public:

    //! Command latch enable
    sc_in<bool> CLE;

    //! Address latch enable
    sc_in<bool> ALE;

    //! Read enable
    sc_in<bool> RE;

    //! Data bus
    sc_inout<int> DQ;

    //! Data bus clock
    sc_inout<bool> DQS;

    //! Ready/Busy
    sc_out<bool> RB;

    //! Write enable
    sc_in<bool> WE;

    sc_in<Task> taskIn;

    sc_out<Task> taskOut;

    sc_in<TaskAddr> taskAddrIn;

    sc_out<TaskAddr> taskAddrOut;
    
    // Constructor
    NAND(sc_module_name _name, Parameter _par);

    // Capacity of NAND in terms of number of pages
    int getCapacity();

    //! Capacity of NAND in terms of bytes
    int getSize();

    //! Read a page (Page addresses are aggreagated)
    int readPage(int addr);

    //! Program a page (Page addresses are aggreagated)
    void progPage(int addr, int val);

    //! Erase a block (Block addresses are aggreagated)
    void eraseBlock(int addr);

    // Interface thread
    void ONFI_If();
    void simpleIf();
    //void simpleIfMemory();

    //! Friend declarations
    friend std::ostream& operator<<(std::ostream& os, NAND& nand);
};

//! Output stream operator for NAND class
std::ostream& operator<<(std::ostream& os, NAND& nand);
