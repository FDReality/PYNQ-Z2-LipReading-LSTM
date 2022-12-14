// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __infer_Bias0_i_H__
#define __infer_Bias0_i_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct infer_Bias0_i_ram : public sc_core::sc_module {

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


   SC_CTOR(infer_Bias0_i_ram) {
        ram[0] = "0b10111100110110001001010001110110";
        ram[1] = "0b00111110000101100010000111001001";
        ram[2] = "0b00111101100011011010000011101000";
        ram[3] = "0b00111011010101000011110111011010";
        ram[4] = "0b10111100101101000100011101010000";
        ram[5] = "0b10111101010101100010101111000001";
        ram[6] = "0b00111100110000110001000000100000";
        ram[7] = "0b00111100101001000000000000100000";
        ram[8] = "0b10111100101010100001110011011111";
        ram[9] = "0b10111110000110111111100000111110";
        ram[10] = "0b10111100010000011100010110010010";
        ram[11] = "0b10111101101100100110100110110101";
        ram[12] = "0b00111110010001011011001110101000";
        ram[13] = "0b00111101101110000011000000010101";
        ram[14] = "0b00111101011001010011100101101011";
        ram[15] = "0b00111100001111101100100011001000";
        ram[16] = "0b00111110001011100010110010101100";
        ram[17] = "0b00111110100001001111110001101011";
        ram[18] = "0b00111110000001111010010100110010";
        ram[19] = "0b10111100111010111010101111000000";
        ram[20] = "0b00111101100110000101110000010111";
        ram[21] = "0b10111101100001111010001101110101";
        ram[22] = "0b00111100000011110100001101011111";
        ram[23] = "0b10111101111000110010111010001011";
        ram[24] = "0b00111110001010000110010100100111";
        ram[25] = "0b00111110010000111000110100111100";
        ram[26] = "0b10111100100100110100110100101010";
        ram[27] = "0b10111101101000000111010101111110";
        ram[28] = "0b00111101001111100000110111000101";
        ram[29] = "0b10111101100100100001000101111111";
        ram[30] = "0b00111101110001011011111011000000";
        ram[31] = "0b00111101001010000100010111110101";
        ram[32] = "0b00111110000110110011101100110110";
        ram[33] = "0b00111110010100101110110111011100";
        ram[34] = "0b10111011111000101000111101000001";
        ram[35] = "0b00111110001101100110010010011000";
        ram[36] = "0b00111101100000111110011100101001";
        ram[37] = "0b00111110000111111011111110110110";
        ram[38] = "0b10111001111100111111110011100111";
        ram[39] = "0b10111101100100010001001010001010";
        ram[40] = "0b10111101110011110011100001101110";
        ram[41] = "0b00111101101111100001110100011011";
        ram[42] = "0b00111101011101101000111101101100";
        ram[43] = "0b00111110011000011010100101011011";
        ram[44] = "0b10111100101000011111100000100010";
        ram[45] = "0b00111110001100000111011100110101";
        ram[46] = "0b00111101100011000100111100010101";
        ram[47] = "0b00111100100000110000111100101001";
        ram[48] = "0b10111101101110000011011010100100";
        ram[49] = "0b00111010111011111010000100111000";
        ram[50] = "0b10111101010000000010111100110000";
        ram[51] = "0b10111110001000101100010100010101";
        ram[52] = "0b00111110010010000111111100011100";
        ram[53] = "0b00111101101101110100010001010110";
        ram[54] = "0b10111110001010100111111111101001";
        ram[55] = "0b10111101010110100001000111010100";
        ram[56] = "0b00111101101111011010001111001010";
        ram[57] = "0b00111110001001001101010100100110";
        ram[58] = "0b00111110010001010101010010101101";
        ram[59] = "0b00111100111101001011001101110110";
        ram[60] = "0b00111101110111101110111000101101";
        ram[61] = "0b00111101101110100100010000010111";
        ram[62] = "0b00111101101111111100000011000000";
        ram[63] = "0b10111101010101111101010101010001";


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


SC_MODULE(infer_Bias0_i) {


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


infer_Bias0_i_ram* meminst;


SC_CTOR(infer_Bias0_i) {
meminst = new infer_Bias0_i_ram("infer_Bias0_i_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~infer_Bias0_i() {
    delete meminst;
}


};//endmodule
#endif
