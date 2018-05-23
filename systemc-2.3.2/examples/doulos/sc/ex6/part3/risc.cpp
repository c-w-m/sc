// SystemC 2.0
// risc.cpp
//
#include "risc.h"
#include "defs.h"

// enumerated type for op-codes
enum OpT {LDA, MOVA, MOVF, MOVZ, INC, DEC, JMP, SGE, SZ, MOVAX, MOVXA, HALT};

// OP class
class OP
{
  public:
    OpT cmd;
    int arg;
};

// overloaded stream input operator for OpT
ifstream& operator>> (ifstream& ip, OP& op)
{
  bool comment = false;
  bool noarg = false;
  int  arg;
  char buffer[80];

  do
  {
    ip >> buffer;
    if (buffer[0] == ';')
    {             // discard commented lines
      comment = true;
      ip.getline(buffer,80,'\n');
    }
    else comment = false;
  } while (comment == true);

  // convert string to enum type
  // (strcmp returns 0 if strings match)
  if (strcmp(buffer,"LDA") == 0)       op.cmd = LDA;
  else if (strcmp(buffer,"MOVA") == 0) op.cmd = MOVA;
  else if (strcmp(buffer,"MOVF") == 0) op.cmd = MOVF;
  else if (strcmp(buffer,"MOVZ") == 0) op.cmd = MOVZ;
  else if (strcmp(buffer,"INC")  == 0)
  {
    op.cmd = INC;
    noarg  = true;
  }
  else if (strcmp(buffer,"DEC") == 0)
  {
    op.cmd = DEC;
    noarg  = true;
  }
  else if (strcmp(buffer,"JMP") == 0) op.cmd = JMP;
  else if (strcmp(buffer,"SGE") == 0) op.cmd = SGE;
  else if (strcmp(buffer,"SZ")  == 0)
  {
    op.cmd = SZ;
    noarg  = true;
  }
  else if (strcmp(buffer,"MOVAX") == 0) op.cmd = MOVAX;
  else if (strcmp(buffer,"MOVXA") == 0) op.cmd = MOVXA;
  // treat as HALT instruction if no match found
  else
  {
    op.cmd = HALT;
    noarg  = true;
  }

  // read argument if required
  if (noarg == false)
  {
    ip >> arg;
    op.arg = arg;
  }
  else op.arg = 0;

  return ip;
}


void Risc::entry()
{

  // code rom array
  OP coderom[256];

  // special registers
  OP opcode;
  sc_uint<8> A  = 0;
  sc_uint<8> pc = 0;

  // bus transfer data
  BusT::dataT bus_data = 0;

  // register file
  sc_uint<8> Reg[16];

  sc_uint<8> ext_address;

  // reset registers
  for (int i = 0; i < 16; i++)
    Reg[i] = 0;

  // set halt false
  halt->write(false);

  // load code rom
  ifstream fin(af);

  if (fin)
    cout << endl << "Risc processor model executing assembler program from file " << af << endl << endl;
  else
  {
    cout << "code rom file cannot be opened" << endl;
    exit(1);
  }

  // read cmd from fin until eof
  while (fin.eof() == false)
  {
    fin >> opcode;
    coderom[pc++] = opcode;
  }

  // Local tracing
  sc_trace(tf, pc,          "pc");
  sc_trace(tf, A,           "A");
  sc_trace(tf, opcode.cmd,  "opcode.cmd");
  sc_trace(tf, opcode.arg,  "opcode.arg");
  sc_trace(tf, Reg[0],      "data");
  sc_trace(tf, Reg[1],      "i");
  sc_trace(tf, Reg[2],      "j");
  sc_trace(tf, Reg[3],      "dest");

  //wait();
  pc = 0;
  for (;;)
  {
    //wait();

    // #define DIAG foo

    // display program counter
    #ifdef DIAG
      cout << setw(3) << pc;
    #endif

    // fetch instruction from code rom
    opcode = coderom[pc];

    // instruction decoding
    switch (opcode.cmd)
    {
    case LDA:
      #ifdef DIAG
        cout << setw(5) << "LDA" << setw(4) << opcode.arg;
      #endif
      A = opcode.arg;
      pc++;
      break;

    case MOVA:
      #ifdef DIAG
        cout << setw(5) << "MOVA" << setw(4) << opcode.arg;
      #endif
      if (opcode.arg == 15)             // indirect addressing
        opcode.arg = Reg[15];
      A = Reg[opcode.arg];
      pc++;
      break;

    case MOVF:
      #ifdef DIAG
        cout << setw(5) << "MOVF" << setw(4) << opcode.arg;
      #endif
      if (opcode.arg == 15)             // indirect addressing
        opcode.arg = Reg[15];
      Reg[opcode.arg] = A;
      pc++;
      break;

    case MOVZ:
      #ifdef DIAG
        cout << setw(5) << "MOVZ" << setw(4) << opcode.arg;
      #endif
      Reg[15] = Reg[opcode.arg];
      pc++;
      break;

    case INC:
      #ifdef DIAG
        cout << setw(5) << "INC" << setw(4) << "";
      #endif
      A++;
      pc++;
      break;

    case DEC:
      #ifdef DIAG
        cout << setw(5) << "DEC" << setw(4) << "";
      #endif
      A--;
      pc++;
      break;

    case JMP:
      #ifdef DIAG
        cout << setw(5) << "JMP" << setw(4) << opcode.arg;
      #endif
      pc = opcode.arg;
      break;

    case SGE:
      #ifdef DIAG
        cout << setw(5) << "SGE" << setw(4) << opcode.arg;
      #endif
      if (A >= Reg[opcode.arg]) pc+=2;
      else pc++;
      break;

    case SZ:
      #ifdef DIAG
        cout << setw(5) << "SZ" << setw(4) << "";
      #endif
      if (A == 0) pc ++;
      pc++;
      break;

    case MOVAX:
      #ifdef DIAG
        cout << setw(5) << "MOVAX" << setw(4) << opcode.arg << endl;
      #endif
      ext_address = Reg[opcode.arg];

      // insert code to perform external
      // bus read from ext_address into
      // register A here . . .

      system_bus->read(ext_address, bus_data, id);
      A = bus_data;

      pc++;
      break;

    case MOVXA:
      #ifdef DIAG
        cout << setw(5) << "MOVXA" << setw(4) << opcode.arg << endl;
      #endif
      ext_address = Reg[opcode.arg];

      // insert code to perform external
      // bus write to ext_address with
      // the contents of register A here . . .

      bus_data = A;

      system_bus->write(ext_address, bus_data, id);

      pc++;
      break;

    default:
      #ifdef DIAG
        cout << setw(5) << "HALT" << setw(4) << "";
      #endif
      halt->write(true);
      break;
    }
    // display cpu status to cout
    #ifdef DIAG
      cout << " A: " << setw(3) << A << ", Z: " << setw(3) << Reg[15] << endl;
    #endif
  }

}
