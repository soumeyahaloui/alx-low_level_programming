#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to a pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next_node = NULL;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		next_node = current->next;
		free(current);
		current = next_node;

		if (current >= next_node)
		{
			*h = NULL;
			break;
		}
	}

	return (node_count);
}
