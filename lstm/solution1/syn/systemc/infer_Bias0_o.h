// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __infer_Bias0_o_H__
#define __infer_Bias0_o_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct infer_Bias0_o_ram : public sc_core::sc_module {

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


   SC_CTOR(infer_Bias0_o_ram) {
        ram[0] = "0b00111101110100101110000111100111";
        ram[1] = "0b00111110100010111000010011100000";
        ram[2] = "0b10111101110000100101001010001110";
        ram[3] = "0b00111101000010011110010100010001";
        ram[4] = "0b10111101101101110110010100001011";
        ram[5] = "0b10111100001110101001010111010011";
        ram[6] = "0b00111101101011100000101010000110";
        ram[7] = "0b00111110000111001001010011000000";
        ram[8] = "0b00111110001011111110111101100010";
        ram[9] = "0b00111110001101001010000101101101";
        ram[10] = "0b10111101101100100110010100101101";
        ram[11] = "0b10111101011101010101011111111110";
        ram[12] = "0b10111101010010100010100000011111";
        ram[13] = "0b00111110001110011011000011111110";
        ram[14] = "0b10111101010000111001100000010000";
        ram[15] = "0b10111100110111100110110001111101";
        ram[16] = "0b10111110001010010000001101001100";
        ram[17] = "0b00111101111111111001111110101000";
        ram[18] = "0b10111110001110001000011101101101";
        ram[19] = "0b00111101010010011101111101111101";
        ram[20] = "0b10111101010010000100011100110001";
        ram[21] = "0b10111101100111100101010101001100";
        ram[22] = "0b00111101011000100010111110010000";
        ram[23] = "0b10111101100010000111110101101010";
        ram[24] = "0b10111101010010011100100110101011";
        ram[25] = "0b10111011101001111100101011100000";
        ram[26] = "0b00111110001011111011010011011110";
        ram[27] = "0b00111101100111011110000101000010";
        ram[28] = "0b10111110001011011100010101000011";
        ram[29] = "0b10111100110001101001000011011110";
        ram[30] = "0b00111101100000100110000001011101";
        ram[31] = "0b00111101001001010110101100100001";
        ram[32] = "0b00111101110101010011001010001011";
        ram[33] = "0b00111011001010001100000000101000";
        ram[34] = "0b00111110011100100100000010000000";
        ram[35] = "0b00111110001110110010010101101000";
        ram[36] = "0b00111110001000000101110011110101";
        ram[37] = "0b00111101101011011000001111001011";
        ram[38] = "0b00111110000001101101000111001010";
        ram[39] = "0b00111110000001100111010101110000";
        ram[40] = "0b00111110100100000000100001000000";
        ram[41] = "0b00111110000011000010111101010010";
        ram[42] = "0b00111100101111001010101000110101";
        ram[43] = "0b10111100000111100101001001111011";
        ram[44] = "0b10111101101100001110100010111110";
        ram[45] = "0b10111101000100001101001001111110";
        ram[46] = "0b10111100111101000101010000110000";
        ram[47] = "0b00111110100101100100000111011111";
        ram[48] = "0b10111101110010000111000100100010";
        ram[49] = "0b10111101101010011110111101010100";
        ram[50] = "0b00111101101011111011101011000001";
        ram[51] = "0b00111110010110001111011001011100";
        ram[52] = "0b00111110000011100110011111010001";
        ram[53] = "0b10111101101010101100001001001101";
        ram[54] = "0b00111101000001100101000000110001";
        ram[55] = "0b00111100001011100110110011000101";
        ram[56] = "0b00111110100010100110101111011000";
        ram[57] = "0b00111100111111101100001001111110";
        ram[58] = "0b00111101110011001111010111010110";
        ram[59] = "0b00111110001011101100100000100101";
        ram[60] = "0b00111101101010101010010111011111";
        ram[61] = "0b00111110100100000100111011001010";
        ram[62] = "0b00111101111111110100010110100011";
        ram[63] = "0b00111101011100101001111011100110";


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


SC_MODULE(infer_Bias0_o) {


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


infer_Bias0_o_ram* meminst;


SC_CTOR(infer_Bias0_o) {
meminst = new infer_Bias0_o_ram("infer_Bias0_o_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~infer_Bias0_o() {
    delete meminst;
}


};//endmodule
#endif
