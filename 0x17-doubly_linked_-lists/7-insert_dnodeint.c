#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node;
	unsigned int current_index = 0;

	/* Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;

	/* Special case: insert at the beginning */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return *h;
	}

	/* Find the position to insert */
	while (current_node && current_index != idx - 1)
	{
		current_index++;
		current_node = current_node->next;
	}

	/* General case */
	if (current_node && current_index == idx - 1)
	{
		new_node->prev = current_node;
		new_node->next = current_node->next;
		if (current_node->next)
			current_node->next->prev = new_node;
		current_node->next = new_node;
		return new_node;
	}

	free(new_node);
	return NULL;
}S
