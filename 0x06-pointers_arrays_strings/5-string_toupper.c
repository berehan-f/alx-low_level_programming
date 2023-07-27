#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string into uppercase.
 * @c: the string to convert.
 * Return: pointer to the converted string.
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}
	return (c);
}
