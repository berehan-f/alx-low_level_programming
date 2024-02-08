#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of
 *               a listint_t linked list.
 * @head: pointer to the first node of a listint_t linked list.
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
