#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	dlistint_t *head = NULL;

	/* Insert nodes at the beginning of the list */
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 1);

	/* Print the list */
	print_dlistint(head);

	/* Free the list */
	free_dlistint(head);

	return (0);
}
