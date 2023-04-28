#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *nil_str = "[0] (nil)";

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("%s\n", nil_str);
		else
			printf("%s\n", h->str);

		h = h->next;
		count++;
	}

	return (count);
}
