#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line.
 * @str: the string to print
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != 0)
		i++;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
