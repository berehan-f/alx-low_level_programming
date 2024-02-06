#include "lists.h"


void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
