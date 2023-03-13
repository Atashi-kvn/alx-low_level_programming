#"Static Libraries" Project

This repository contains the code for the "Static Libraries" project in the low-level programming curriculum of ALX Software Engineering program.
Table of Contents

    Project Details
    File Descriptions
    Technologies Used
    Setup and Usage

###Project Details

The objective of this project is to learn about static libraries in C programming language. The first task of the project is to create a static library libmy.a containing various functions. The functions included in the library are:

    _putchar
    _islower
    _isalpha
    _abs
    _isupper
    _isdigit
    _strlen
    _puts
    _strcpy
    _atoi
    _strcat
    _strncat
    _strncpy
    _strcmp
    _memset
    _memcpy
    _strchr
    _strspn
    _strpbrk
    _strstr

If any of the functions are missing, an empty function with the correct prototype is created. The header file main.h contains the prototypes of all these functions.

The next task is to create a shell script create_static_lib.sh that creates a static library liball.a from all the C files that are present in the current directory.
File Descriptions

###This project contains the following files:

    README.md: This readme file.
    libmy.a: Static library created in the first task.
    main.h: Header file that contains the prototypes of all the functions in the libmy.a library.
    create_static_lib.sh: Shell script to create a static library liball.a from all the C files present in the current directory.
    *.c: Implementation files for various functions included in the libmy.a library.

###Technologies Used

    C programming language
    Ubuntu 14.04 LTS
    gcc compiler

###Setup and Usage

To use the libmy.a library in your C program, include the header file main.h and link with the library using the following commands:



#include "main.h"

gcc -Wall -pedantic -Werror -Wextra main.c -L. -lmy -o main

Here, main.c is the C file that contains the code for your program.

To create the liball.a library, run the create_static_lib.sh script using the command:



./create_static_lib.sh

This will create a static library liball.a containing all the C files present in the current directory. You can link this library with your C program using the following command:



gcc -Wall -pedantic -Werror -Wextra main.c -L. -lall -o main

Here, main.c is the C file that contains the code for your program.
