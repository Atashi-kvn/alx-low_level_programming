Hash Tables Project
This repository contains solutions to tasks related to hash tables implemented in the C programming language.

Description
The tasks involve implementing various functionalities of a hash table, including creating a hash table, implementing the djb2 hash function, setting and getting elements in the hash table, printing the contents of the hash table, and deleting the hash table.

Tasks Overview
Task 0: Create a Hash Table
Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
Returns a pointer to the newly created hash table
If something went wrong, the function returns NULL
Task 1: Implement the djb2 Hash Function
Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
Task 2: Get the Index of a Key
Write a function that gives you the index of a key in the hash table.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
Returns the index at which the key/value pair should be stored in the array of the hash table
Task 3: Add an Element to the Hash Table
Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Returns 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list
Task 4: Retrieve a Value Associated with a Key
Write a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
Returns the value associated with the element, or NULL if the key couldn’t be found
Task 5: Print the Hash Table
Write a function that prints a hash table.

Prototype: void hash_table_print(const hash_table_t *ht);
Prints the key/value pairs in the order that they appear in the array of the hash table
If ht is NULL, don’t print anything
Task 6: Delete a Hash Table
Write a function that deletes a hash table.

Prototype: void hash_table_delete(hash_table_t *ht);
Frees all memory allocated for the hash table
Files
0-hash_table_create.c: Contains the implementation of the function to create a hash table.
1-djb2.c: Contains the implementation of the djb2 hash function.
2-key_index.c: Contains the implementation of the function to get the index of a key.
3-hash_table_set.c: Contains the implementation of the function to add an element to the hash table.
4-hash_table_get.c: Contains the implementation of the function to retrieve a value associated with a key.
5-hash_table_print.c: Contains the implementation of the function to print the hash table.
6-hash_table_delete.c: Contains the implementation of the function to delete a hash table.
main: Contains main functions to test each task.
Compilation and Usage
Compile the C files using your preferred compiler. For example:

bash
Copy code
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_tables
Execute the compiled program:

bash
Copy code
./hash_tablesHash Tables Project
This repository contains solutions to tasks related to hash tables implemented in the C programming language.

Description
The tasks involve implementing various functionalities of a hash table, including creating a hash table, implementing the djb2 hash function, setting and getting elements in the hash table, printing the contents of the hash table, and deleting the hash table.

Tasks Overview
Task 0: Create a Hash Table
Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
Returns a pointer to the newly created hash table
If something went wrong, the function returns NULL
Task 1: Implement the djb2 Hash Function
Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
Task 2: Get the Index of a Key
Write a function that gives you the index of a key in the hash table.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
Returns the index at which the key/value pair should be stored in the array of the hash table
Task 3: Add an Element to the Hash Table
Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Returns 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list
Task 4: Retrieve a Value Associated with a Key
Write a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
Returns the value associated with the element, or NULL if the key couldn’t be found
Task 5: Print the Hash Table
Write a function that prints a hash table.

Prototype: void hash_table_print(const hash_table_t *ht);
Prints the key/value pairs in the order that they appear in the array of the hash table
If ht is NULL, don’t print anything
Task 6: Delete a Hash Table
Write a function that deletes a hash table.

Prototype: void hash_table_delete(hash_table_t *ht);
Frees all memory allocated for the hash table
Files
0-hash_table_create.c: Contains the implementation of the function to create a hash table.
1-djb2.c: Contains the implementation of the djb2 hash function.
2-key_index.c: Contains the implementation of the function to get the index of a key.
3-hash_table_set.c: Contains the implementation of the function to add an element to the hash table.
4-hash_table_get.c: Contains the implementation of the function to retrieve a value associated with a key.
5-hash_table_print.c: Contains the implementation of the function to print the hash table.
6-hash_table_delete.c: Contains the implementation of the function to delete a hash table.
main: Contains main functions to test each task.
Compilation and Usage
Compile the C files using your preferred compiler. For example:

bash
Copy code
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_tables
Execute the compiled program:


Copy code
./hash_tables