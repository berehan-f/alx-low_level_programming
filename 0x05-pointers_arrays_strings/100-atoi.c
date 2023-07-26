#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert to integer.
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int i, j, num = 0;
	unsigned int sign = 1;

	for (i = 0; (s[i] < '0' || s[i] > '9') && s[i] != 0; i++)
	{
		if (s[i] == '-')
			sign *= -1;
	}
	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
	{
		num = (num * 10) + (s[j] - '0');
	}
	return (num * sign);
}
