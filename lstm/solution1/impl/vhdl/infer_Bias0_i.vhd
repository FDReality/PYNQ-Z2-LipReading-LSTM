-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity infer_Bias0_i_rom is 
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


architecture rtl of infer_Bias0_i_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111100110110001001010001110110", 
    1 => "00111110000101100010000111001001", 
    2 => "00111101100011011010000011101000", 
    3 => "00111011010101000011110111011010", 
    4 => "10111100101101000100011101010000", 
    5 => "10111101010101100010101111000001", 
    6 => "00111100110000110001000000100000", 
    7 => "00111100101001000000000000100000", 
    8 => "10111100101010100001110011011111", 
    9 => "10111110000110111111100000111110", 
    10 => "10111100010000011100010110010010", 
    11 => "10111101101100100110100110110101", 
    12 => "00111110010001011011001110101000", 
    13 => "00111101101110000011000000010101", 
    14 => "00111101011001010011100101101011", 
    15 => "00111100001111101100100011001000", 
    16 => "00111110001011100010110010101100", 
    17 => "00111110100001001111110001101011", 
    18 => "00111110000001111010010100110010", 
    19 => "10111100111010111010101111000000", 
    20 => "00111101100110000101110000010111", 
    21 => "10111101100001111010001101110101", 
    22 => "00111100000011110100001101011111", 
    23 => "10111101111000110010111010001011", 
    24 => "00111110001010000110010100100111", 
    25 => "00111110010000111000110100111100", 
    26 => "10111100100100110100110100101010", 
    27 => "10111101101000000111010101111110", 
    28 => "00111101001111100000110111000101", 
    29 => "10111101100100100001000101111111", 
    30 => "00111101110001011011111011000000", 
    31 => "00111101001010000100010111110101", 
    32 => "00111110000110110011101100110110", 
    33 => "00111110010100101110110111011100", 
    34 => "10111011111000101000111101000001", 
    35 => "00111110001101100110010010011000", 
    36 => "00111101100000111110011100101001", 
    37 => "00111110000111111011111110110110", 
    38 => "10111001111100111111110011100111", 
    39 => "10111101100100010001001010001010", 
    40 => "10111101110011110011100001101110", 
    41 => "00111101101111100001110100011011", 
    42 => "00111101011101101000111101101100", 
    43 => "00111110011000011010100101011011", 
    44 => "10111100101000011111100000100010", 
    45 => "00111110001100000111011100110101", 
    46 => "00111101100011000100111100010101", 
    47 => "00111100100000110000111100101001", 
    48 => "10111101101110000011011010100100", 
    49 => "00111010111011111010000100111000", 
    50 => "10111101010000000010111100110000", 
    51 => "10111110001000101100010100010101", 
    52 => "00111110010010000111111100011100", 
    53 => "00111101101101110100010001010110", 
    54 => "10111110001010100111111111101001", 
    55 => "10111101010110100001000111010100", 
    56 => "00111101101111011010001111001010", 
    57 => "00111110001001001101010100100110", 
    58 => "00111110010001010101010010101101", 
    59 => "00111100111101001011001101110110", 
    60 => "00111101110111101110111000101101", 
    61 => "00111101101110100100010000010111", 
    62 => "00111101101111111100000011000000", 
    63 => "10111101010101111101010101010001" );

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

entity infer_Bias0_i is
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

architecture arch of infer_Bias0_i is
    component infer_Bias0_i_rom is
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
    infer_Bias0_i_rom_U :  component infer_Bias0_i_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


