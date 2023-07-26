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
	int sign = 1;

	for (i = 0; (s[i] < '0' || s[i] > '9') && s[i] != 0; i++)
	{
		printf("%c", s[i]);
		if (s[i] == '-')
			sign *= -1;
	}
	printf("\n");
	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
	{
		printf("%c\n", s[j]);
		num = (num * 10) + (s[j] - '0');
	}
	return (num * sign);
}
