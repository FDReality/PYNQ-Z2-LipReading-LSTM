// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __infer_Bias0_f_H__
#define __infer_Bias0_f_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct infer_Bias0_f_ram : public sc_core::sc_module {

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


   SC_CTOR(infer_Bias0_f_ram) {
        ram[0] = "0b10111101011011111111001100010000";
        ram[1] = "0b00111101111000101100111101100001";
        ram[2] = "0b10111100011110101001011010101010";
        ram[3] = "0b00111110100001100111001101100001";
        ram[4] = "0b00111101001001000000110011010101";
        ram[5] = "0b10111011000100110011001001110111";
        ram[6] = "0b10111100010000101101010000100110";
        ram[7] = "0b00111101110111101000010001000011";
        ram[8] = "0b00111101110100111001000101011110";
        ram[9] = "0b10111100001101100100011000001101";
        ram[10] = "0b00111110010001111000111101110011";
        ram[11] = "0b00111110010101101000100110110111";
        ram[12] = "0b00111010100010101011001011110111";
        ram[13] = "0b00111101110101111100010101100101";
        ram[14] = "0b00111101011111000000001000100100";
        ram[15] = "0b00111110010000000111111001101000";
        ram[16] = "0b10111101010000011110101000100011";
        ram[17] = "0b00111110000010111111110111001001";
        ram[18] = "0b00111101011100100110010001110110";
        ram[19] = "0b00111101110000110101001100110101";
        ram[20] = "0b00111110000111100011010111001100";
        ram[21] = "0b10111101101100001011010111111110";
        ram[22] = "0b00111110000100010110011000100011";
        ram[23] = "0b00111100011001110111011011011101";
        ram[24] = "0b10111101011000011011111100110101";
        ram[25] = "0b10111110000010110000101010111011";
        ram[26] = "0b10111101000010101001001011001001";
        ram[27] = "0b10111101011110101100110000010111";
        ram[28] = "0b00111110001001000101000010111001";
        ram[29] = "0b10111101101011001111100111000111";
        ram[30] = "0b00111101001110110000011001100001";
        ram[31] = "0b10111101111110010000010011110111";
        ram[32] = "0b10111011111010100011101101011101";
        ram[33] = "0b00111110010010010101111011000011";
        ram[34] = "0b00111100101101000111100101001111";
        ram[35] = "0b00111011011010101011101000011110";
        ram[36] = "0b00111101100111110010011001101100";
        ram[37] = "0b00111101000011110101010011001111";
        ram[38] = "0b10111101111000011101111100011010";
        ram[39] = "0b00111101101000010111000101000110";
        ram[40] = "0b00111101100100100110010110010111";
        ram[41] = "0b10111101010110000110010111101000";
        ram[42] = "0b00111110000111110011101101100100";
        ram[43] = "0b00111100101011001010000100001110";
        ram[44] = "0b00111110011011111111001110111010";
        ram[45] = "0b00111101111101010110001111111010";
        ram[46] = "0b00111110011011000101100011001101";
        ram[47] = "0b00111110000101010000000001100111";
        ram[48] = "0b10111110010101111101011001000010";
        ram[49] = "0b10111101101011110110100011001110";
        ram[50] = "0b10111011110000011000111000010101";
        ram[51] = "0b00111100011111101101011000001001";
        ram[52] = "0b10111101100110101001010100000100";
        ram[53] = "0b00111011110111001000011000101000";
        ram[54] = "0b00111101010010110100100000111000";
        ram[55] = "0b00111101111011010110010110000000";
        ram[56] = "0b00111101101101010000111101011001";
        ram[57] = "0b10111110100000001000110000110100";
        ram[58] = "0b00111101101001111010101011011010";
        ram[59] = "0b00111110011001110110010111010110";
        ram[60] = "0b10111101111001011100000111010111";
        ram[61] = "0b00111110010110001111101100101110";
        ram[62] = "0b10111110001010110010000110100111";
        ram[63] = "0b10111101100110010110011001110010";


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


SC_MODULE(infer_Bias0_f) {


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


infer_Bias0_f_ram* meminst;


SC_CTOR(infer_Bias0_f) {
meminst = new infer_Bias0_f_ram("infer_Bias0_f_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~infer_Bias0_f() {
    delete meminst;
}


};//endmodule
#endif
