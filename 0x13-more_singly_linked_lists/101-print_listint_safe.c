#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i;
	const listint_t *temp, *prev;

	if (head == NULL)
	{
		printf("Error: NULL pointer passed\n");
		exit(98);
	}

	temp = head;
	while (temp != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		prev = temp;
		temp = temp->next;

		if (prev <= temp)
			continue;

		printf("-> [%p] %d\n", (void *)temp, temp->n);
		break;
	}

	if (temp != NULL)
		nodes++;

	for (i = 0; i < nodes; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (nodes);
}
