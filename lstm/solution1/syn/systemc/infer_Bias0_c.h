// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __infer_Bias0_c_H__
#define __infer_Bias0_c_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct infer_Bias0_c_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(infer_Bias0_c_ram) {
        ram[0] = "0b10111110001111100010000010111100";
        ram[1] = "0b10111010100110100010001000000000";
        ram[2] = "0b10111100101000111001110000101100";
        ram[3] = "0b00111100001100100010011001000011";
        ram[4] = "0b10111101111001110110111100110101";
        ram[5] = "0b10111101001101010001110010111101";
        ram[6] = "0b00111011011010101010100011010110";
        ram[7] = "0b00111010100111101010000000111111";
        ram[8] = "0b00111110000110001010110010100101";
        ram[9] = "0b00111110010001001011101011101111";
        ram[10] = "0b10111110001011000011011111110101";
        ram[11] = "0b10111100000001011100110010111110";
        ram[12] = "0b10111100100111001110000011101100";
        ram[13] = "0b00111011010110011011111111111010";
        ram[14] = "0b00111100001011101000100100010101";
        ram[15] = "0b00111110010011011101000001010011";
        ram[16] = "0b10111101111100110111011110011011";
        ram[17] = "0b00111011101001101010101111100110";
        ram[18] = "0b00111101101100100011001110110111";
        ram[19] = "0b10111110010010000000000111000010";
        ram[20] = "0b10111110001111001111100000000111";
        ram[21] = "0b10111110001110110000100110010011";
        ram[22] = "0b10111110010000111100000011000110";
        ram[23] = "0b10111101001111011100011111110010";
        ram[24] = "0b00111101101100010010011110000111";
        ram[25] = "0b10111110000001101100011010001100";
        ram[26] = "0b00111110100000111101011001001010";
        ram[27] = "0b00111110001010110000110101110101";
        ram[28] = "0b10111110010100010101000000000001";
        ram[29] = "0b00111101100110110101101100101001";
        ram[30] = "0b10111101000010101010010001000011";
        ram[31] = "0b00111101101010011100010101010110";
        ram[32] = "0b00111110000010111110010011000001";
        ram[33] = "0b00111100000111111101000100101100";
        ram[34] = "0b00111110001100000110100011110101";
        ram[35] = "0b10111100001010000001100000000010";
        ram[36] = "0b00111101000000000001010111100101";
        ram[37] = "0b00111101000110001100000010011110";
        ram[38] = "0b00111100011010100100101011000010";
        ram[39] = "0b00111101100011100111000100011100";
        ram[40] = "0b10111110000100111000010010000100";
        ram[41] = "0b10111101000010101001100001111010";
        ram[42] = "0b00111101100001011111101111110111";
        ram[43] = "0b00111101101001101111010100011100";
        ram[44] = "0b10111100101111011110000100110111";
        ram[45] = "0b10111101100001010001001111010110";
        ram[46] = "0b10111110000000001101010010010100";
        ram[47] = "0b00111101110011101110001001101100";
        ram[48] = "0b00111011100001010100011110111110";
        ram[49] = "0b00111101000010000000010100101010";
        ram[50] = "0b00111110001011110101000011100011";
        ram[51] = "0b10111101010001111101100000100001";
        ram[52] = "0b00111101110100100101110101110100";
        ram[53] = "0b10111101111100001000000100110111";
        ram[54] = "0b00111110000001000100101111101101";
        ram[55] = "0b10111110000010101101100010101100";
        ram[56] = "0b10111110011011011001111111000001";
        ram[57] = "0b00111101000011001010101100111001";
        ram[58] = "0b00111101101110000100111111001101";
        ram[59] = "0b10111101111110111110111011110101";
        ram[60] = "0b10111101011000110100001100110110";
        ram[61] = "0b00111110001001111001101001111111";
        ram[62] = "0b00111101111001100110110100111001";
        ram[63] = "0b10111110001101100100000111010011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(infer_Bias0_c) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


infer_Bias0_c_ram* meminst;


SC_CTOR(infer_Bias0_c) {
meminst = new infer_Bias0_c_ram("infer_Bias0_c_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~infer_Bias0_c() {
    delete meminst;
}


};//endmodule
#endif
