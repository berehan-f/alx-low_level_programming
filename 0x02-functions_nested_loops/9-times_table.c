#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 */

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (mul < 10)
					_putchar(' ');
			}
			if (mul > 9)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(mul + '0');
			}
			if (j == 9)
				_putchar('\n');
		}
	}
}
