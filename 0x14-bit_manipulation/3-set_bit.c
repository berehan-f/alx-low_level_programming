#include "main.h"

/**
 * set_bit - sets the valuse of a bit to 1 at a given index.
 * @n: address to the number to on which to operate.
 * @index: index starting from 0 of the bit to set.
 * Return: 1 if it worked or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
		return (-1);

	x = x << index;
	*n = *n | x;
	return (1);
}

