#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int counter = 0;

	while (current_node && counter != index)
	{
		counter++;
		current_node = current_node->next;
	}

	if (current_node && counter == index)
		return (current_node);

	return (NULL);
}
