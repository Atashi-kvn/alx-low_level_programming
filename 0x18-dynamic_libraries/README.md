
# 0x18. C - Dynamic libraries

This repository contains my solutions for the 0x18. C - Dynamic libraries assignment as part of the curriculum at [Holberton School](https://www.holbertonschool.com/).

## Description

In this assignment, we explore the concept of dynamic libraries in C programming. We learn how to create, compile, and use dynamic libraries to modularize and share code across multiple programs. The tasks involve understanding the use of `gcc` flags, using the `nm` and `ldd` commands, and manipulating the `$LD_LIBRARY_PATH` environment variable.

The repository includes the following files:

- `libholberton.so`: A dynamic library containing various functions.
- `holberton.h`: The header file corresponding to the dynamic library.
- `1-create_dynamic_lib.sh`: A shell script to create a dynamic library from a set of `.c` files.

## Requirements

The code in this repository is written in C. To compile and run the programs, you need:

- A C compiler (e.g., `gcc`)
- A Unix-like operating system (Linux, macOS)

## Usage

To use the dynamic library (`libholberton.so`) in your C programs, follow these steps:

1. Clone this repository to your local machine:
   ```
   git clone https://github.com/Atashi-kvn/0x18-dynamic_libraries.git
   ```

2. Compile your program by linking it with the dynamic library:
   ```
   gcc <your_program.c> -L./ -lholberton -o <output_file>
   ```

3. Run your program:
   ```
   ./<output_file>
   ```

## Examples

Here's an example of a C program that uses the dynamic library:

```
#include <stdio.h>
#include "holberton.h"

int main(void)
{
    printf("Addition: %d\n", add(10, 5));
    printf("Subtraction: %d\n", sub(10, 5));
    printf("Multiplication: %d\n", mul(10, 5));
    printf("Division: %d\n", div(10, 5));
    return 0;
}
```

Compile and run the program:

gcc main.c -L./ -lholberton -o myprogram
./myprogram

## Author

[Kelvin Atandi](https://github.com/Atashi-kvn
