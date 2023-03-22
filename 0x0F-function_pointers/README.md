C - Function pointers

This repository contains solutions to several tasks that involve the use of function pointers in C.
Tasks
Task 0: What's my name

This task involves writing a function print_name that takes a char *name and a function pointer void (*f)(char *) as arguments. The function should print the name using the function pointed to by f.
Task 1: If you spend too much time thinking about a thing, you'll never get it done

This task requires the implementation of a function array_iterator that takes an array of integers int *array, its size size, and a function pointer void (*action)(int) as arguments. The function should apply the function pointed to by action to each element of the array.
Task 2: To hell with circumstances; I create opportunities

This task involves writing a function int_index that searches for an integer in an array. The function takes an array of integers int *array, its size size, and a function pointer int (*cmp)(int) as arguments. The function should return the index of the first element for which the function pointed to by cmp does not return 0. If no element matches, the function should return -1. If the size is less than or equal to 0, the function should return -1.
Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

This task involves writing a program that performs simple arithmetic operations on integers. The program takes three arguments - two integers and an arithmetic operator (+, -, *, /, %). The program should print the result of the operation, followed by a new line. The program should handle errors such as incorrect number of arguments, unknown operator, and division by zero.

The solution to this task involves the creation of four different files:

    3-calc.h: contains all the function prototypes and data structures used by the program.
    3-op_functions.c: contains five functions that perform the five arithmetic operations - op_add, op_sub, op_mul, op_div, and op_mod.
    3-get_op_func.c: contains a function get_op_func that selects the correct function to perform the operation based on the operator passed as an argument to the program.
    3-main.c: contains the main function that parses the arguments, calls the appropriate functions, and handles errors.

Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

This task involves writing a program that prints the opcodes of its own main function in hexadecimal format. The program takes one argument - the number of bytes of the opcodes to print. The solution to this task involves the use of printf and atoi functions to convert the argument to an integer. The program should handle errors such as incorrect number
