#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to the pointer to the first node in the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		current_node->next = prev_node;

		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;
	return (*head);
}
