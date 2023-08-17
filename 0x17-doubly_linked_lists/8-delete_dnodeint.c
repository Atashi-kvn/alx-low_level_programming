#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *node_to_delete = *head;
	unsigned int current_index;
	unsigned int current_count = 0;

	/* Border case: empty list */
	if (!(*head))
		return -1;

	/* Border case: delete at the beginning */
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		if (*head)
			(*head)->prev = NULL;
		return 1;
	}

	/* Find the position to delete */
	current_index = index - 1;
	while (current_node && current_count != current_index)
	{
		current_count++;
		current_node = current_node->next;
	}

	/* General case */
	if (current_count == current_index && current_node)
	{
		node_to_delete = current_node->next;
		if (node_to_delete->next)
			node_to_delete->next->prev = current_node;
		current_node->next = node_to_delete->next;
		free(node_to_delete);
		return 1;
	}

	return -1;
}
