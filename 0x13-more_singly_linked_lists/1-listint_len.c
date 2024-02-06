#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to a listint_t structure.
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
