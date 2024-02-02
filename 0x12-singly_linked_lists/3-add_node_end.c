#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t linked list.
 * @head: a pointer to a pointer to the first  node of list_t list.
 * @str: the str field of the new node.
 * Return: address of the newly created node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while ((*head)->next)
		*head = (*head)->next;

	(*head)->next = new;

	return (new);
}
