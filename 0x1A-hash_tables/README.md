Introduction

This repository contains the implementation of a hash table in C. A hash table is a data structure that allows efficient storage and retrieval of key-value pairs. In this project, we will explore the fundamentals of hash tables, including hash functions, collision handling, and various operations.
Project Details
Project Name: Hash Tables


Learning Objectives

By the end of this project, you will be able to:

    Explain what a hash function is.
    Identify the characteristics of a good hash function.
    Understand how hash tables work and how to use them.
    Define collisions in the context of hash tables and discuss collision resolution methods.
    Evaluate the advantages and drawbacks of using hash tables.
    Recognize common use cases for hash tables.

Requirements

    Allowed Editors: vi, vim, emacs
    Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
    File Endings: All files should end with a new line
    README.md: A mandatory README.md file at the root of the project folder
    Coding Style: Code should adhere to the Betty style (checked using betty-style.pl and betty-doc.pl)
    Global Variables: Avoid using global variables
    Functions per File: Limit each file to no more than 5 functions
    C Standard Library: You are allowed to use the C standard library
    Header File: Prototypes of all functions should be included in the header file hash_tables.h
    Header File Guard: Use include guards in all header files

Data Structures

Data structures: hash_node_t

c

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

hash_table_t

c

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

Tests

Collaborate on creating a set of tests to ensure the functionality of the code.
Python Dictionaries

Python dictionaries are implemented using hash tables. Understanding this project will help you grasp the power and simplicity of Python dictionaries. While Python doesn't use the exact same implementation, the core principles are similar.
Tasks
Task 0: hash_table_create

Write a function that creates a hash table.

    Prototype: hash_table_t *hash_table_create(unsigned long int size);
    Returns a pointer to the newly created hash table.
    If something goes wrong, return NULL.

Task 1: hash_djb2

Write a hash function implementing the djb2 algorithm.

    Prototype: unsigned long int hash_djb2(const unsigned char *str);
    Use the djb2 algorithm (you can copy and paste it).

Task 2: key_index

Write a function that gives you the index of a key.

    Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
    Use the hash_djb2 function for this task.
    Returns the index at which the key/value pair should be stored in the array of the hash table.

Task 3: hash_table_set

Write a function that adds an element to the hash table.

    Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
    ht is the hash table to add or update the key/value to.
    key is the key; it cannot be an empty string.
    value is the value associated with the key; it must be duplicated, and it can be an empty string.
    Returns 1 if it succeeds, 0 otherwise.
    In case of collision, add the new node at the beginning of the list.

Task 4: hash_table_get

Write a function that retrieves a value associated with a key.

    Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
    ht is the hash table to look into.
    key is the key you are looking for.
    Returns the value associated with the element or NULL if the key couldn't be found.

Task 5: hash_table_print

Write a function that prints a hash table.

    Prototype: void hash_table_print(const hash_table_t *ht);
    Print the key/value pairs in the order they appear in the array of the hash table.
    If ht is NULL, don't print anything.

Task 6: hash_table_delete

Write a function that deletes a hash table.

    Prototype: void hash_table_delete(hash_table_t *ht);
