#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned int tmp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (tmp = n; tmp; tmp >>= 1)
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
