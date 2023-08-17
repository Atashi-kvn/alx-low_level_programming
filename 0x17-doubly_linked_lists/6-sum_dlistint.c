#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the list is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int total_sum = 0;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}

	return total_sum;
}S
