Singly Linked Lists Readme

This repository contains code for implementing singly linked lists in C language. The project includes a header file containing definitions and prototypes for all types and functions, as well as several source files for various tasks.
Files
Tests

    tests: Directory for testing purposes.

Header File

    lists.h: Header file containing definitions and prototypes for all types and functions written for the project.

Types

    struct list_s: Struct that represents a node in the linked list.
        char *str: Pointer to a string stored in the node.
        unsigned int len: Length of the string stored in the node.
        struct list_s *next: Pointer to the next node in the list.
    typedef list_t: Alias for struct list_s.

Functions

    size_t print_list(const list_t *h): Prints all the elements of a list_t list. If str is NULL, the function prints [0] (nil).
    size_t list_len(const list_t *h): Returns the number of elements in a list_t list.
    list_t *add_node(list_t **head, const char *str): Adds a new node at the beginning of a list_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element.
    list_t *add_node_end(list_t **head, const char *str): Adds a new node at the end of a list_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element.
    void free_list(list_t *head): Frees a list_t list.

Tasks

    0-print_list.c: C function that prints all the elements of a list_t list.
    1-list_len.c: C function that returns the number of elements in a list_t list.
    2-add_node.c: C function that adds a new node at the beginning a of a list_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element.
    3-add_node_end.c: C function that adds a new node at the end of a list_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element.
    4-free_list.c: C function that frees a list_t list.
    100-first.c: C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main() function is executed.
    101-hello_holberton.asm: 64-but assembly program that prints "Hello, Holberton" followed by a new line using only the printf() function without interrupts.

Usage

To use the code in this repository, simply clone the repository and include the lists.h header file in your C program. Use the functions provided in the source files to create and manipulate singly linked lists.

For example, to create a new singly linked list and add nodes to it, you can do the following:

c

#include "lists.h"
#include <stdlib.h>

int main(void)
{
    list_t *head = NULL;

    head = add_node(&head, "Hello");
    add_node_end(&head, "World");
    print_list(head);

    free_list(head);
    return (0);
}

This program will create a new singly linked list with two nodes, one containing the string "Hello" and the other containing the string "World". It will

