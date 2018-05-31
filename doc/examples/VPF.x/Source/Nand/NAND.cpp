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

#include "NAND.h"
#include <random>
#include <functional>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
// Block functions
///////////////////////////////////////////////////////////////////////////////

Block::Block(int _nPage, int _pageSize)
: nPage(_nPage), pageSize(_pageSize), pages(_nPage, ERASE_STATE) {}


int Block::getCapacity() {
   return nPage*pageSize;
}

int Block::getSize() {
   return nPage;
}

int Block::readPage(int addr) {
   if (pages[addr] == -1) {
      cout << "*** Warning: Erased page is read: " << addr << endl;
      exit(1);
   }
   return pages[addr];
}

void Block::progPage(int addr, int val) {
   if (pages[addr] != -1) {
      cout << "*** Warning: Programmed page is programmed: " << addr << endl;
      exit(1);
   }
   pages[addr] = val;
}

void Block::erase() {
   for (int i = 0; i < nPage; i++) {
      pages[i] = ERASE_STATE;
   }
}

ostream& operator<<(ostream& os, Block& block) {
   for (int i = 0; i < block.nPage; i++) {
      os << block.pages[i] << " ";
   }
   os << endl;
   return os;
}

///////////////////////////////////////////////////////////////////////////////
// Plane functions
///////////////////////////////////////////////////////////////////////////////

Plane::Plane(int _nBlock, int _nPage, int _pageSize)
: nBlock(_nBlock),
nPage(_nPage),
pageSize(_pageSize),
blocks(nBlock, Block(_nPage, _pageSize)) {}

int Plane::getSize() {
   return nBlock*nPage;
}

int Plane::getCapacity() {
   return nBlock*nPage*pageSize;
}

int Plane::readPage(int addr) {
   int blockAddr = addr / nPage;
   int pageAddr = addr % nPage;
   return blocks[blockAddr].readPage(pageAddr);
}

void Plane::progPage(int addr, int val) {
   int blockAddr = addr / nPage;
   int pageAddr = addr % nPage;
   blocks[blockAddr].progPage(pageAddr, val);
}

void Plane::eraseBlock(int addr) {
   blocks[addr].erase();
}

ostream& operator<<(ostream& os, Plane& plane) {
   for (int i = 0; i < plane.nBlock; i++) {
      os << "Block " << i << ":" << endl;
      os << plane.blocks[i];
   }
   return os;
}

///////////////////////////////////////////////////////////////////////////////
// LUN functions
///////////////////////////////////////////////////////////////////////////////

LUN::LUN(int _nPlane, int _nBlock, int _nPage, int _pageSize)
: nPlane(_nPlane),
nBlock(_nBlock),
nPage(_nPage),
pageSize(_pageSize),
planes(nPlane, Plane(_nBlock, _nPage, _pageSize)) {}

int LUN::getSize() {
   return nPlane*nBlock*nPage;
}

int LUN::getCapacity() {
   return nPlane*nBlock*nPage*pageSize;
}

int LUN::readPage(int addr) {
   int planeAddr = addr / (nBlock*nPage);
   int remAddr = addr % (nBlock*nPage);
   return planes[planeAddr].readPage(remAddr);
}

void LUN::progPage(int addr, int val) {
   int planeAddr = addr / (nBlock*nPage);
   int remAddr = addr % (nBlock*nPage);
   planes[planeAddr].progPage(remAddr, val);
}

void LUN::eraseBlock(int addr) {
   int planeAddr = addr / nBlock;
   int blockAddr = addr % nBlock;
   planes[planeAddr].eraseBlock(blockAddr);
}

ostream& operator<<(ostream& os, LUN& lun) {
   for (int i = 0; i < lun.nPlane; i++) {
      os << "Plane " << i << ":" << endl;
      os << lun.planes[i];
   }
   return os;
}

///////////////////////////////////////////////////////////////////////////////
// NAND functions
///////////////////////////////////////////////////////////////////////////////

NAND::NAND(sc_module_name _name, Parameter _par)
: sc_module(_name),
par(_par),
LUNs(par.nLUN, LUN(par.nPlane, par.nBlock, par.nPage, par.pageSize)),
verbose(_par.NAND_Verbose) {
   
   // Command times
   // +2 is added since command and command confirm cycles
   comOverheadTime = (par.addrTime + 2) * par.clockRate / 1000;
   if (par.asyncIf) {
      pageTransTime = par.pageSize*par.clockRate / 1000;
   }
   else {
      pageTransTime = par.pageSize*(par.clockRate / 2) / 1000;
   }
   slotTransTime = pageTransTime / par.nSlot;

   mode = IDLE;
   addr = -1;
   
   if (par.ifType == ONFI) {
      SC_THREAD(ONFI_If);
      sensitive << RE << WE.pos() << DQS;
   }
   else if (par.ifType == SIMPLE) {
      SC_THREAD(simpleIf);
      sensitive << taskIn;
   }
   //else if (par.ifType == SIMPLE_MEMORY) {
   //   SC_THREAD(simpleIfMemory);
   //   sensitive << taskAddrIn;
   //}
}

int NAND::getSize() {
   return par.nLUN*par.nPlane*par.nBlock*par.nPage;
}

int NAND::getCapacity() {
   return par.nLUN*par.nPlane*par.nBlock*par.nPage*par.pageSize;
}

int NAND::readPage(int addr) {
   int LUN_Addr = addr / (par.nPlane*par.nBlock*par.nPage);
   int remAddr = addr % (par.nPlane*par.nBlock*par.nPage);
   return LUNs[LUN_Addr].readPage(remAddr);
}

void NAND::progPage(int addr, int val) {
   int LUN_Addr = addr / (par.nPlane*par.nBlock*par.nPage);
   int remAddr = addr % (par.nPlane*par.nBlock*par.nPage);
   LUNs[LUN_Addr].progPage(remAddr, val);
}

void NAND::eraseBlock(int addr) {
   int LUN_Addr = addr / (par.nPlane*par.nBlock);
   int remAddr = addr % (par.nPlane*par.nBlock);
   LUNs[LUN_Addr].eraseBlock(remAddr);
}

void NAND::ONFI_If() {
   if (verbose > 0) {
      coutf() << "NAND  : Begin" << endl;
   }
   RB.write(1);
   mode = IDLE;
   cycle = RDY;
   
   while (true) {
      // Wait for an action
      wait();
      
      // Read operation
      readOper();
      
      // Program operation
      progOper();
      
      // Erase operation
      eraseOper();
   }
}


void NAND::simpleIf() {
   RB.write(1);
   
   while (true) {
      // Wait for an action
      wait();
      
      // Get the task
      Task task = taskIn;
      
      if (task.type == Task::READ) {
         //coutf() << "NAND :  Read task" << endl;
         RB = 0;
         
         // Wait for the read
         wait(par.readTime, SC_US);
         int value = readPage(task.addr);
         
         // Set status to idle
         RB = 1;
         
         // Transfer the data
         wait(RE.posedge_event());
         task.setValue(value);
         taskOut = task;

         //coutf() << "NAND :  Read is completed" << endl;
      }
      else if (task.type == Task::PROG) {
         //coutf() << "NAND :  Program task" << endl;
         RB = 0;
         progPage(task.addr, task.getValue());
         wait(par.progTime, SC_US);
         RB = 1;
         //coutf() << "NAND :  Program is completed" << endl;
      }
      else if (task.type == Task::ERASE) {
         // Go to busy
         RB = 0;

         // Wait for the erase
         wait(par.eraseTime, SC_US);
         eraseBlock(task.addr);
         
         // Go to idle
         RB = 1;
         //coutf() << "NAND :  Erase is completed" << endl;
      }
      else if (task.type == Task::MULTI_READ) {
         //coutf() << "NAND :  Multi read task" << endl;
         RB = 0;
         
         // Get all multiplane tasks
         vector<Task> buffer;
         buffer.push_back(task);
         bool isEnd = false;
         while (isEnd==false){
            // Wait for another task
            wait();
            
            // Add it to the buffer
            Task temp = taskIn;
            buffer.push_back(temp);
            if (temp.type==Task::READ){
               isEnd = true;
            }
         }
         
         // Read the multiplanes
         for (unsigned i=0; i<buffer.size(); i++){
            int value = readPage(buffer[i].addr);
            buffer[i].setValue(value);
         }
         
         // Wait for the read
         wait(par.readTime, SC_US);
         //coutf() << "NAND :  Multi plane read task is DONE." << endl;
         RB = 1;
         
         // Send multiplane tasks back to back
         for (unsigned i=0; i<buffer.size(); i++){
            // Wait for read enable
            wait(RE.posedge_event());
            taskOut = buffer[i];
         }
      }
      else if (task.type == Task::MULTI_PROG) {
         //coutf() << "NAND :  Multi program task" << endl;
         RB = 0;
         
         // Get all multiplane tasks
         vector<Task> buffer;
         buffer.push_back(task);
         //coutf() << "NAND :  Got task 0" << endl;
         bool isEnd = false;
         while (isEnd==false){
            // Wait for another task
            wait();
            
            // Add it to the buffer
            Task temp = taskIn;
            buffer.push_back(temp);
            //coutf() << "NAND :  Got task " << buffer.size()-1 << endl;
            if (temp.type==Task::PROG){
               isEnd = true;
            }
         }
         //coutf() << "NAND :  Got the multiplane program tasks." << endl;
         
         // Program the multiplanes
         for (unsigned i=0; i<buffer.size(); i++){
            progPage(buffer[i].addr, buffer[i].getValue());
         }

         // Wait for the program
         wait(par.progTime, SC_US);
         //coutf() << "NAND :  Multiplane program task is DONE." << endl;
         
         // Got to idle
         RB = 1;
      }
      else if (task.type == Task::MULTI_ERASE) {
         RB = 0;
         
         // Get all multiplane tasks
         vector<Task> buffer;
         buffer.push_back(task);
         //coutf() << "NAND : Got multiplane erase task = " << task << endl;
         bool isEnd = false;
         while (isEnd==false){
            // Wait for another task
            wait();
            
            // Add it to the buffer
            Task temp = taskIn;
            //coutf() << "NAND : Got multiplane erase task = " << temp << endl;
            buffer.push_back(temp);
            if (temp.type==Task::ERASE){
               isEnd = true;
            }
         }
         
         //coutf() << "NAND : Got all multiplane erase tasks." << endl;

         // Erase the multiplanes
         for (unsigned i=0; i<buffer.size(); i++){
            eraseBlock(buffer[i].addr);
         }

         // Wait for the erase
         wait(par.eraseTime, SC_US);

         RB = 1;
      }
   }
}


void NAND::readOper() {
   if (mode == IDLE) {
      if (CLE.read() && DQ.read() == RD) {
         if (verbose > 0) {
            coutf() << "NAND  : Mode is READ " << endl;
         }
         mode = READ;
         cycle = COM;
      }
   }
   else if (mode == READ) {
      if (cycle == COM) {
         if (ALE.read()) {
            cycle = ADR;
            addr = DQ.read();
            if (verbose > 0) {
               coutf() << "NAND  : Address = " << addr << endl;
            }
         }
      }
      else if (cycle == ADR) {
         if (CLE.read() && DQ.read() == RDC) {
            cycle = CFM;
            if (verbose > 0) {
               coutf() << "NAND  : Read command is confirmed. " << endl;
            }
            
            // Reading the page
            cycle = BUSY;
            waitCycle(0.5);
            RB.write(0);
            if (verbose > 0) {
               coutf() << "NAND  : Reading is beginning ..." << endl;
            }
            value = readPage(addr);
            wait(par.readTime, SC_US);
            if (verbose > 0) {
               coutf() << "NAND  : Reading is done." << endl;
            }
            RB.write(1);
         }
      }
      else if (cycle == BUSY) {
         if (RE.read() == false) {
            cycle = DOUT;
            if (verbose > 0) {
               coutf() << "NAND  : Read data = " << value << endl;
            }
            if (par.asyncIf == false) {
               DQS.write(0);
            }
            DQ.write(value);
         }
      }
      else if (cycle == DOUT) {
         if (par.asyncIf == false) {
            DQS.write(1);
         }
         cycle = RDY;
         mode = IDLE;
         if (verbose > 0) {
            coutf() << "NAND  : Mode is IDLE." << endl;
         }
      }
   }
}

void NAND::progOper() {
   if (mode == IDLE) {
      if (CLE.read() && DQ.read() == PM) {
         if (verbose > 0) {
            coutf() << "NAND  : Mode is PROG " << endl;
         }
         mode = PROG;
         cycle = COM;
      }
   }
   else if (mode == PROG) {
      if (cycle == COM) {
         if (ALE.read()) {
            cycle = ADR;
            addr = DQ.read();
            if (verbose > 0) {
               coutf() << "NAND  : Address = " << addr << endl;
            }
         }
      }
      else if (cycle == ADR) {
         if (par.asyncIf) {
            if (WE.read()) {
               cycle = DIN;
               value = DQ.read();
            }
         }
         else {
            if (DQS.read()) {
               cycle = DIN;
               value = DQ.read();
            }
         }
      }
      else if (cycle == DIN) {
         if (CLE.read() && DQ.read() == PMC) {
            cycle = CFM;
            if (verbose > 0) {
               coutf() << "NAND  : Program command is confirmed. " << endl;
            }
            
            // Programming the page
            cycle = BUSY;
            waitCycle(0.5);
            RB.write(0);
            if (verbose > 0) {
               coutf() << "NAND  : Programming is beginning ..." << endl;
            }
            progPage(addr, value);
            wait(par.progTime, SC_US);
            if (verbose > 0) {
               coutf() << "NAND  : Programming is done. " << endl;
            }
            RB.write(1);
            
            // Switch to IDLE mode
            cycle = RDY;
            mode = IDLE;
            if (verbose > 0) {
               coutf() << "NAND  : Mode is IDLE. " << endl;
            }
         }
      }
   }
}

void NAND::eraseOper() {
   if (mode == IDLE) {
      if (CLE.read() && DQ.read() == ER) {
         if (verbose > 0) {
            coutf() << "NAND  : Mode is ERASE " << endl;
         }
         mode = ERASE;
         cycle = COM;
      }
   }
   else if (mode == ERASE) {
      if (cycle == COM) {
         if (ALE.read()) {
            cycle = ADR;
            addr = DQ.read();
            if (verbose > 0) {
               coutf() << "NAND  : Address = " << addr << endl;
            }
         }
      }
      else if (cycle == ADR) {
         if (CLE.read() && DQ.read() == ERC) {
            cycle = CFM;
            if (verbose > 0) {
               coutf() << "NAND  : Erase command is confirmed. " << endl;
            }
            
            // Reading the page
            cycle = BUSY;
            waitCycle(0.5);
            RB.write(0);
            if (verbose > 0) {
               coutf() << "NAND  : Erasing is beginning ..." << endl;
            }
            eraseBlock(addr);
            wait(par.eraseTime, SC_US);
            if (verbose > 0) {
               coutf() << "NAND  : Erasing is done." << endl;
            }
            RB.write(1);
            
            // Switch to IDLE mode
            cycle = RDY;
            mode = IDLE;
            if (verbose > 0) {
               coutf() << "NAND  : Mode is IDLE. " << endl;
            }
         }
      }
   }
}

void NAND::waitCycle(double nCycle) {
   wait(nCycle*par.asyncClockRate, SC_NS);
}

ostream& operator<<(ostream& os, NAND& nand) {
   for (int i = 0; i < nand.par.nLUN; i++) {
      os << "LUN " << i << ":" << endl;
      os << nand.LUNs[i];
   }
   return os;
}

/*
void NAND::simpleIfMemory() {
   RB.write(1);

   while (true) {
      // Wait for an action
      wait();

      // Get the task
      TaskAddr taskAddr = taskAddrIn;
      Task& task = mem.read(taskAddr);

      if (task.type == Task::READ) {
         //coutf() << "NAND :  Read task" << endl;
         RB = 0;
         double waitTime = 8 * par.clockRate / 1000 + par.readTime;
         wait(waitTime, SC_US);
         int value = readPage(addr);
         //coutf() << "NAND :  Page is read" << endl;
         RB = 1;

         // Wait for read enable
         wait(RE.posedge_event());
         //coutf() << "NAND :  Transfer is enabled" << endl;

         // Read the data
         task.setValue(value);
         taskAddrOut = taskAddr;
         //coutf() << "NAND :  Read is completed" << endl;
      }
      else if (task.type == Task::PROG) {
         //coutf() << "NAND :  Program task" << endl;
         RB = 0;
         double waitTime = 8 * par.clockRate / 1000
            + par.progTime
            + par.pageSize*par.clockRate / 1000;
         wait(waitTime, SC_US);
         progPage(task.addr, task.getValue());
         taskAddrOut = taskAddr;
         RB = 1;
         //coutf() << "NAND :  Program is completed" << endl;
      }
      else if (task.type == Task::ERASE) {
         //coutf() << "NAND :  Erase task" << endl;
         RB = 0;
         double waitTime = 8 * par.clockRate / 1000 + par.eraseTime;
         wait(waitTime, SC_US);
         eraseBlock(task.addr);
         taskAddrOut = taskAddr;
         RB = 1;
         //coutf() << "NAND :  Erase is completed" << endl;
      }
   }
}
*/