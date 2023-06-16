Doubly Linked List Operations


Introduction

A doubly linked list is a linear data structure composed of nodes, where each node contains a data element and two pointers, one pointing to the previous node and the other pointing to the next node. This data structure allows efficient insertion, deletion, and traversal operations.

This repository provides the implementation of the following operations on a doubly linked list:

    Print the elements of a doubly linked list.
    Get the number of elements in a doubly linked list.
    Add a new node at the beginning of a doubly linked list.
    Add a new node at the end of a doubly linked list.
    Free a doubly linked list.
    Get the node at a specific index in a doubly linked list.
    Calculate the sum of all elements in a doubly linked list.
    Insert a new node at a given position in a doubly linked list.

Prerequisites

To compile and run the code in this repository, you need to have the following installed on your system:

    C compiler (e.g., gcc)
    Make utility

List of Operations

    print_dlistint: This function prints all the elements of a doubly linked list and returns the number of nodes.
        Prototype: size_t print_dlistint(const dlistint_t *h)

    dlistint_len: This function returns the number of elements in a doubly linked list.
        Prototype: size_t dlistint_len(const dlistint_t *h)

    add_dnodeint: This function adds a new node at the beginning of a doubly linked list and returns the address of the new element.
        Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n)

    add_dnodeint_end: This function adds a new node at the end of a doubly linked list and returns the address of the new element.
        Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

    free_dlistint: This function frees a doubly linked list.
        Prototype: void free_dlistint(dlistint_t *head)

    get_dnodeint_at_index: This function returns the node at a specific index in a doubly linked list.
        Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

    sum_dlistint: This function calculates the sum of all elements in a doubly linked list and returns the result.
        Prototype: int sum_dlistint(dlistint_t *head)

    insert_dnodeint_at_index: This function inserts a new node at a given position in a doubly linked list and returns the address of the new node.
        Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)

Usage


    Include the header file "lists.h" in your source file.

    

#include "lists.h"

