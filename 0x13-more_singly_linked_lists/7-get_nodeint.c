#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a
 *                         listint_t linked list.
 * @head: pointer to the head node of listint_t linked list.
 * @index: the index of the node starting at 0.
 * Return: node at specified index, NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
