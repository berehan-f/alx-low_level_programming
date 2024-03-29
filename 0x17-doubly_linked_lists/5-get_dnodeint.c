#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a
 *                         dlistint_t linked list.
 * @index: index of the nth node, starting from 0.
 * @head: head of the dlistint_t linked list.
 * Return: nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
