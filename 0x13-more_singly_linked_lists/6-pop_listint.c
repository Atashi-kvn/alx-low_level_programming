#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
        listint_t *temp;
        int num;

        if (!head || !*head)
                return (0);

        num = (*head)->n;
        temp = (*head)->next;
        free(*head);
        *head = temp;

        return (num);
}
