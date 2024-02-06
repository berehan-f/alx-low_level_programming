#include "lists.h"

/**
 * free-listint - frees a listint_t list.
 * @head: pointer to the first node of a listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
