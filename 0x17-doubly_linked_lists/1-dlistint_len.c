#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked,
 *                dlistint_t list.
 * @h: node of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
