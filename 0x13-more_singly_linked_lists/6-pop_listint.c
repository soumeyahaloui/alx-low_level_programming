#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The data stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	current_node = *head;
	data = current_node->n;
	*head = (*head)->next;
	free(current_node);

	return (data);
}
