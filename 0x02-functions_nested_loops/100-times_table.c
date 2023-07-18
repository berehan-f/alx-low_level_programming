#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0.
 * @n: the number of which time table to print.
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (mul < 100)
						_putchar(' ');
					if (mul < 10)
						_putchar(' ');
				}
				if (mul > 99)
				{
					_putchar(mul / 100 + '0');
					_putchar((mul % 100) / 10 + '0');
					_putchar((mul % 100) % 10 + '0');
				}
				else if (mul > 9)
				{
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else
				{
					_putchar(mul + '0');
				}
				if (j == n)
					_putchar('\n');
			}
		}
	}
}
