List functions

This repository contains the following functions for working with singly-linked lists:
File: lists.h

Contains prototypes for all the functions listed below.
0. Print list

Prototype: size_t print_listint(const listint_t *h);

A function that prints all the elements of a listint_t linked list. Returns the number of nodes in the listint_t list.
1. List length

Prototype: size_t listint_len(const listint_t *h);

A function that returns the number of elements in a listint_t linked list.
2. Add node

Prototype: listint_t *add_nodeint(listint_t **head, const int n);

A function that adds a new node at the beginning of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element.
3. Add node at the end

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

A function that adds a new node at the end of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element.
4. Free list

Prototype: void free_listint(listint_t *head);

A function that frees a listint_t linked list.
5. Free

Prototype: void free_listint2(listint_t **head);

A function that frees a listint_t linked list. Sets the head to NULL.
6. Pop

Prototype: int pop_listint(listint_t **head);

A function that deletes the head node of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the head node's data (n).
7. Get node at index

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

A function that locates a given node of a listint_t linked list. If the node does not exist - returns NULL. Otherwise - returns the located node.
8. Sum list

Prototype: int sum_listint(listint_t *head);

A function that returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the sum of all the data (n).
9. Insert

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

A function that inserts a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx, or the function fails - returns NULL. Otherwise - returns the address of the new node.
10. Delete at index

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);

A function that deletes the node at a given index of a listint_t linked list. If the function succeeds - returns 1. If the function fails - returns -1.
11. Reverse list

Prototype: listint_t *reverse_listint(listint_t **head);

A function that reverses a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list.
12. Print (safe version)

**
