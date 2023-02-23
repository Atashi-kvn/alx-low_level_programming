C - More functions, more nested loops

This repository contains solutions to the C programming language problems related to more functions and more nested loops. The problems are provided by Holberton School as part of the low-level programming and algorithm curriculum.
Table of Contents

    Technologies
    Usage
    Functions
    Credits

Technologies

The programs in this repository were written in C and tested with gcc 4.8.4 compiler on Ubuntu 14.04 LTS. They are complied using the flags -Wall -Werror -Wextra -pedantic.
Usage

To use these functions, clone the repository and compile the programs using gcc:

css

gcc -Wall -Werror -Wextra -pedantic main.c FILENAME.c -o output

Replace FILENAME.c with the name of the C file containing the function you want to use, and output with the name of the output executable file.
Functions

Here is a brief description of each function in the order they appear in the files:
0. isupper

Function that checks if a given character is uppercase or not.

C

int isupper(int c);

    c: character to be checked

1. isdigit

Function that checks if a given character is a digit or not.

C

int isdigit(int c);

    c: character to be checked

2. Collaboration is multiplication

Function that multiplies two integers and returns the result.

C

int mul(int a, int b);

    a: first integer
    b: second integer

3. The numbers speak for themselves

Function that prints the numbers from 0 to 9 followed by a new line.

C

void print_numbers(void);

4. I believe in numbers and signs

Function that prints the numbers from 0 to 9 followed by a new line, except 2 and 4.

C

void print_most_numbers(void);

5. Numbers constitute the only universal language

Function that prints the numbers from 0 to 14 ten times followed by a new line.

C

void more_numbers(void);

6. The shortest distance between two points is a straight line

Function that prints a straight line in the terminal using the _ character.

C

void print_line(int n);

    n: number of _ characters to print

7. I feel like I am diagonally parked in a parallel universe

Function that prints a diagonal line in the terminal using the \ character.

C

void print_diagonal(int n);

    n: number of \ characters to print

8. You are so much sunshine in every square inch

Function that prints a square in the terminal using the # character.

C

void print_square(int size);

    size: size of the square to print

9. Fizz-Buzz

Program that prints the numbers from 1 to 100, replacing multiples of 3 with Fizz, multiples of 5 with Buzz, and multiples of both 3 and 5 with FizzBuzz.
10. 10. Triangles
Write a function that prints a triangle, followed by a new line.
Prototype: void print_triangle(int size);
You can only use _putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle

 Triangles

Function that prints a triangle in the terminal using the # character.

C

void print_triangle(int size);

    size: size of the triangle to print

11.The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
You are allowed to use the standard library
Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm

 The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful
12. Numbers have life; they're not just symbols on paper
Write a function that prints an integer.
Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values

