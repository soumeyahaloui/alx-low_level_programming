#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at given index in a dlistint_t list
 * @head: Pointer to a pointer to the head node of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);

	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	unsigned int i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (-1);

	dlistint_t *prev_node = current->prev;

	prev_node->next = current->next;

	if (current->next)
		current->next->prev = prev_node;

	free(current);
	return (1);
}
