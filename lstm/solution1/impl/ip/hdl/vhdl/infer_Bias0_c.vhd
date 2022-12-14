-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity infer_Bias0_c_rom is 
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


architecture rtl of infer_Bias0_c_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110001111100010000010111100", 
    1 => "10111010100110100010001000000000", 
    2 => "10111100101000111001110000101100", 
    3 => "00111100001100100010011001000011", 
    4 => "10111101111001110110111100110101", 
    5 => "10111101001101010001110010111101", 
    6 => "00111011011010101010100011010110", 
    7 => "00111010100111101010000000111111", 
    8 => "00111110000110001010110010100101", 
    9 => "00111110010001001011101011101111", 
    10 => "10111110001011000011011111110101", 
    11 => "10111100000001011100110010111110", 
    12 => "10111100100111001110000011101100", 
    13 => "00111011010110011011111111111010", 
    14 => "00111100001011101000100100010101", 
    15 => "00111110010011011101000001010011", 
    16 => "10111101111100110111011110011011", 
    17 => "00111011101001101010101111100110", 
    18 => "00111101101100100011001110110111", 
    19 => "10111110010010000000000111000010", 
    20 => "10111110001111001111100000000111", 
    21 => "10111110001110110000100110010011", 
    22 => "10111110010000111100000011000110", 
    23 => "10111101001111011100011111110010", 
    24 => "00111101101100010010011110000111", 
    25 => "10111110000001101100011010001100", 
    26 => "00111110100000111101011001001010", 
    27 => "00111110001010110000110101110101", 
    28 => "10111110010100010101000000000001", 
    29 => "00111101100110110101101100101001", 
    30 => "10111101000010101010010001000011", 
    31 => "00111101101010011100010101010110", 
    32 => "00111110000010111110010011000001", 
    33 => "00111100000111111101000100101100", 
    34 => "00111110001100000110100011110101", 
    35 => "10111100001010000001100000000010", 
    36 => "00111101000000000001010111100101", 
    37 => "00111101000110001100000010011110", 
    38 => "00111100011010100100101011000010", 
    39 => "00111101100011100111000100011100", 
    40 => "10111110000100111000010010000100", 
    41 => "10111101000010101001100001111010", 
    42 => "00111101100001011111101111110111", 
    43 => "00111101101001101111010100011100", 
    44 => "10111100101111011110000100110111", 
    45 => "10111101100001010001001111010110", 
    46 => "10111110000000001101010010010100", 
    47 => "00111101110011101110001001101100", 
    48 => "00111011100001010100011110111110", 
    49 => "00111101000010000000010100101010", 
    50 => "00111110001011110101000011100011", 
    51 => "10111101010001111101100000100001", 
    52 => "00111101110100100101110101110100", 
    53 => "10111101111100001000000100110111", 
    54 => "00111110000001000100101111101101", 
    55 => "10111110000010101101100010101100", 
    56 => "10111110011011011001111111000001", 
    57 => "00111101000011001010101100111001", 
    58 => "00111101101110000100111111001101", 
    59 => "10111101111110111110111011110101", 
    60 => "10111101011000110100001100110110", 
    61 => "00111110001001111001101001111111", 
    62 => "00111101111001100110110100111001", 
    63 => "10111110001101100100000111010011" );

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

entity infer_Bias0_c is
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

architecture arch of infer_Bias0_c is
    component infer_Bias0_c_rom is
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
    infer_Bias0_c_rom_U :  component infer_Bias0_c_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


