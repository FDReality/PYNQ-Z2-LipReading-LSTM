-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity infer_Bias0_f_rom is 
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


architecture rtl of infer_Bias0_f_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101011011111111001100010000", 
    1 => "00111101111000101100111101100001", 
    2 => "10111100011110101001011010101010", 
    3 => "00111110100001100111001101100001", 
    4 => "00111101001001000000110011010101", 
    5 => "10111011000100110011001001110111", 
    6 => "10111100010000101101010000100110", 
    7 => "00111101110111101000010001000011", 
    8 => "00111101110100111001000101011110", 
    9 => "10111100001101100100011000001101", 
    10 => "00111110010001111000111101110011", 
    11 => "00111110010101101000100110110111", 
    12 => "00111010100010101011001011110111", 
    13 => "00111101110101111100010101100101", 
    14 => "00111101011111000000001000100100", 
    15 => "00111110010000000111111001101000", 
    16 => "10111101010000011110101000100011", 
    17 => "00111110000010111111110111001001", 
    18 => "00111101011100100110010001110110", 
    19 => "00111101110000110101001100110101", 
    20 => "00111110000111100011010111001100", 
    21 => "10111101101100001011010111111110", 
    22 => "00111110000100010110011000100011", 
    23 => "00111100011001110111011011011101", 
    24 => "10111101011000011011111100110101", 
    25 => "10111110000010110000101010111011", 
    26 => "10111101000010101001001011001001", 
    27 => "10111101011110101100110000010111", 
    28 => "00111110001001000101000010111001", 
    29 => "10111101101011001111100111000111", 
    30 => "00111101001110110000011001100001", 
    31 => "10111101111110010000010011110111", 
    32 => "10111011111010100011101101011101", 
    33 => "00111110010010010101111011000011", 
    34 => "00111100101101000111100101001111", 
    35 => "00111011011010101011101000011110", 
    36 => "00111101100111110010011001101100", 
    37 => "00111101000011110101010011001111", 
    38 => "10111101111000011101111100011010", 
    39 => "00111101101000010111000101000110", 
    40 => "00111101100100100110010110010111", 
    41 => "10111101010110000110010111101000", 
    42 => "00111110000111110011101101100100", 
    43 => "00111100101011001010000100001110", 
    44 => "00111110011011111111001110111010", 
    45 => "00111101111101010110001111111010", 
    46 => "00111110011011000101100011001101", 
    47 => "00111110000101010000000001100111", 
    48 => "10111110010101111101011001000010", 
    49 => "10111101101011110110100011001110", 
    50 => "10111011110000011000111000010101", 
    51 => "00111100011111101101011000001001", 
    52 => "10111101100110101001010100000100", 
    53 => "00111011110111001000011000101000", 
    54 => "00111101010010110100100000111000", 
    55 => "00111101111011010110010110000000", 
    56 => "00111101101101010000111101011001", 
    57 => "10111110100000001000110000110100", 
    58 => "00111101101001111010101011011010", 
    59 => "00111110011001110110010111010110", 
    60 => "10111101111001011100000111010111", 
    61 => "00111110010110001111101100101110", 
    62 => "10111110001010110010000110100111", 
    63 => "10111101100110010110011001110010" );

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

entity infer_Bias0_f is
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

architecture arch of infer_Bias0_f is
    component infer_Bias0_f_rom is
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
    infer_Bias0_f_rom_U :  component infer_Bias0_f_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


