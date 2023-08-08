#include <stdlib.h>

/**
 * _strdup - allocate a space in memory that contains,
 *           the copy of the string given as parameter.
 * @str: the string given as parameter.
 * Return: a pointer to the newly allocated space.
 */

char *_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		;
	copy = malloc(sizeof(char) * i);
	if (copy != 0 && i != 0)
	{
		for (j = 0; j <= i; j++)
			copy[j] = str[j];
		return (copy);
	}

	return (0);
}
