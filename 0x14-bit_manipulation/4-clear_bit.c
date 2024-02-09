#include "main.h"
#include "limits.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: address of the number on which to clear a bit.
 * @index: the index starting from 0 of the bit to clear.
 * Return: 1 if it worked or -1 if error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
		return (-1);
	x = x << index;
	x = ~x;
	*n = *n & x;
	return (1);
}

