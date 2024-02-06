#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a double pointer to the first node of a listint_t list.
 * @n: A value with which to initialize the (n) member of a type listint_t.
 * Return: the address of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
