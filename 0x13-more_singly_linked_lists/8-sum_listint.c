#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: A pointer to the head node of the list.
 *
 * Return: The sum of all the data of the list.
 *         If the list is empty - 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
