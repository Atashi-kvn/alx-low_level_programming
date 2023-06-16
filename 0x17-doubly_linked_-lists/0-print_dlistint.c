#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t node_count = 0;

	while (current_node)
	{
		printf("%i\n", current_node->n);
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
