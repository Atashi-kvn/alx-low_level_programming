#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node in a dlistint_t linked list
 *
 * @head: head of the list of a dlistint_t linked list
 * @index: index of the nth node of a dlistint_t linked list
 * Return: nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	a = 0;

	while (head != NULL)
	{
		if (a == index)
			break;
		head = head->next;
		a++;
	}

	return (head);
}
