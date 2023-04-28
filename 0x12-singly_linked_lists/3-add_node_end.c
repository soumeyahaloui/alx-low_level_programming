#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list_t list
 * @head: A pointer to a pointer to the head node of the list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *new_str;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (new_node);
}
