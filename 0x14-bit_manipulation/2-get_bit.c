#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number from which to extract the bit.
 * @index: the index at which to extract the bit.
 * Return: the value of the bit at index, or -1 if error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j, i = 0, base = 2, size = 64, new_size;
	char *bits, *tmp;

	bits = malloc(size);
	if (bits == NULL)
		return (-1);
	do {
		if (i >= size)
		{
			new_size = size + 64;
			tmp = malloc(new_size);
			if (tmp == NULL)
				return (-1);
			for (j = 0; j < size; j++)
				tmp[j] = bits[j];
			free(bits);
			bits = tmp;
		}
		bits[i++] = n % base;
		n /= base;
	} while (n);

	if (index < i)
		return (bits[index]);
	return (-1);
}
