-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity infer_Bias0_o_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of infer_Bias0_o_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101110100101110000111100111", 
    1 => "00111110100010111000010011100000", 
    2 => "10111101110000100101001010001110", 
    3 => "00111101000010011110010100010001", 
    4 => "10111101101101110110010100001011", 
    5 => "10111100001110101001010111010011", 
    6 => "00111101101011100000101010000110", 
    7 => "00111110000111001001010011000000", 
    8 => "00111110001011111110111101100010", 
    9 => "00111110001101001010000101101101", 
    10 => "10111101101100100110010100101101", 
    11 => "10111101011101010101011111111110", 
    12 => "10111101010010100010100000011111", 
    13 => "00111110001110011011000011111110", 
    14 => "10111101010000111001100000010000", 
    15 => "10111100110111100110110001111101", 
    16 => "10111110001010010000001101001100", 
    17 => "00111101111111111001111110101000", 
    18 => "10111110001110001000011101101101", 
    19 => "00111101010010011101111101111101", 
    20 => "10111101010010000100011100110001", 
    21 => "10111101100111100101010101001100", 
    22 => "00111101011000100010111110010000", 
    23 => "10111101100010000111110101101010", 
    24 => "10111101010010011100100110101011", 
    25 => "10111011101001111100101011100000", 
    26 => "00111110001011111011010011011110", 
    27 => "00111101100111011110000101000010", 
    28 => "10111110001011011100010101000011", 
    29 => "10111100110001101001000011011110", 
    30 => "00111101100000100110000001011101", 
    31 => "00111101001001010110101100100001", 
    32 => "00111101110101010011001010001011", 
    33 => "00111011001010001100000000101000", 
    34 => "00111110011100100100000010000000", 
    35 => "00111110001110110010010101101000", 
    36 => "00111110001000000101110011110101", 
    37 => "00111101101011011000001111001011", 
    38 => "00111110000001101101000111001010", 
    39 => "00111110000001100111010101110000", 
    40 => "00111110100100000000100001000000", 
    41 => "00111110000011000010111101010010", 
    42 => "00111100101111001010101000110101", 
    43 => "10111100000111100101001001111011", 
    44 => "10111101101100001110100010111110", 
    45 => "10111101000100001101001001111110", 
    46 => "10111100111101000101010000110000", 
    47 => "00111110100101100100000111011111", 
    48 => "10111101110010000111000100100010", 
    49 => "10111101101010011110111101010100", 
    50 => "00111101101011111011101011000001", 
    51 => "00111110010110001111011001011100", 
    52 => "00111110000011100110011111010001", 
    53 => "10111101101010101100001001001101", 
    54 => "00111101000001100101000000110001", 
    55 => "00111100001011100110110011000101", 
    56 => "00111110100010100110101111011000", 
    57 => "00111100111111101100001001111110", 
    58 => "00111101110011001111010111010110", 
    59 => "00111110001011101100100000100101", 
    60 => "00111101101010101010010111011111", 
    61 => "00111110100100000100111011001010", 
    62 => "00111101111111110100010110100011", 
    63 => "00111101011100101001111011100110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem(CONV_INTEGER(addr1_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity infer_Bias0_o is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of infer_Bias0_o is
    component infer_Bias0_o_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    infer_Bias0_o_rom_U :  component infer_Bias0_o_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


