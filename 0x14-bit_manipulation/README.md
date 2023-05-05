C - Bit Manipulation Task Project

This repository contains a C project that includes various functions for performing bit manipulation operations on unsigned long integer numbers. The functions provided in this project are:
1. binary_to_uint
Prototype

c

unsigned int binary_to_uint(const char *b);

Description

This function takes a binary string as input and converts it to an unsigned integer. The binary string should only contain 0 and 1 characters. If the input string contains any other characters, the function returns 0. If the input string is NULL, the function also returns 0.
Return Value

The converted unsigned integer value.
2. print_binary
Prototype

c

void print_binary(unsigned long int n);

Description

This function takes an unsigned long integer as input and prints its binary representation to the standard output. The binary representation is printed without any leading zeros.
Format

The binary representation is printed as a string of 0 and 1 characters.
Constraints

    Arrays, malloc, % operator, and / operator are not allowed to be used.

3. get_bit
Prototype

c

int get_bit(unsigned long int n, unsigned int index);

Description

This function takes an unsigned long integer n and an index index as input, and returns the value of the bit at the given index in n. The index starts from 0, representing the least significant bit (LSB).
Return Value

The value of the bit at the given index, which can be either 0 or 1. If an error occurs, the function returns -1.
4. set_bit
Prototype

c

int set_bit(unsigned long int *n, unsigned int index);

Description

This function takes a pointer to an unsigned long integer n and an index index as input, and sets the value of the bit at the given index in n to 1. The index starts from 0, representing the least significant bit (LSB).
Return Value

1 if the operation was successful, or -1 if an error occurred.
5. clear_bit
Prototype

c

int clear_bit(unsigned long int *n, unsigned int index);

Description

This function takes a pointer to an unsigned long integer n and an index index as input, and sets the value of the bit at the given index in n to 0. The index starts from 0, representing the least significant bit (LSB).
Return Value

1 if the operation was successful, or -1 if an error occurred.
6. flip_bits
Prototype

c

unsigned int flip_bits(unsigned long int n, unsigned long int m);

Description

This function takes two unsigned long integers n and m as input, and returns the number of bits that need to be flipped in n to get to m. The function calculates the bitwise XOR of n and m, and then counts the number of set bits (bits with value 1) in the XOR result.
Return Value

The number of bits that need to be flipped to get from n to m.
Usage

To use these functions in your C project, you can include the respective function declarations in your source code and link the functions during the compilation process. For example:

c

#include <stdio.h>
#include "bit_manipulation.h"

int main(void) {
    const char *binary_str = "101001";
    unsigned int num = binary_to


