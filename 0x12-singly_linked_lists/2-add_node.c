#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a new node to the beginning of a list_t list
 * @head: The head of the list_t list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
