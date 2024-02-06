#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a double pointer to the first node of a listint_t list.
 * Return: he head node's data (n) or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (x);
}
