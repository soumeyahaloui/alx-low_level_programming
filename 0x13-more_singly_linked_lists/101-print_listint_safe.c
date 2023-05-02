#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head->next;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	curr = head;

	while (curr != slow)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;
		curr = curr->next;
	}
	printf("-> [%p] %d\n", (void *)curr, curr->n);
	count++;
	return (count);
}
