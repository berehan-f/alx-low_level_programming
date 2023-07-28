#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to print
 */

void print_number(int n)
{
	unsigned int x;
	int tmp, power = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	for (x = n; x % 10 != x; x /= 10)
		power *= 10;

	for (x = n; power > 0; power /= 10)
	{
		tmp = x / power;
		_putchar(tmp % 10 + '0');
	}
}
