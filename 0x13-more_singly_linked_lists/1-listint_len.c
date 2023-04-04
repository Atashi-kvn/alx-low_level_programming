#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Linked list of type listint_t to traverse.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        num++;   /* increment num for each node*/
        h = h->next;   /* move to the next node*/
    }

    return (num);   /* return the number of nodes in the list*/
}
