#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from
 *             one number to another.
 * @n: first number.
 * @m: second number.
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bit1, bit2, bits = 0;

	for (i = 0; i < 64; i++)
	{
		bit1 = (n >> i) & 1;
		bit2 = (m >> i) & 1;
		if (bit1 != bit2)
			bits++;
	}

	return (bits);
}
