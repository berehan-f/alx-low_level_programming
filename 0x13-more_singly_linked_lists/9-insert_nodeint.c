#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position.
 * @idx: the index of the list where the new node should be added.
 * @n: the data(n) of a listint_t structure.
 * @head: a pointer to a pointer to the first node of the list.
 * Return: the address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (tmp = *head; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
