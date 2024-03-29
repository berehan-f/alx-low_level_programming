#include "lists.h"

/**
 * free_list - frees a list_t linked list.
 * @head: list_t list which is to be freed.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
