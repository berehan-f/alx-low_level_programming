#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number from which to extract the bit.
 * @index: the index at which to extract the bit.
 * Return: the value of the bit at index, or -1 if error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index >= 64)
		return (-1);
	tmp = n >> index;
	return (tmp & 1);
}
