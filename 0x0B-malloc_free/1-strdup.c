#include <stdlib.h>
/**
 * _strdup - copies a string to a new memory location.
 * @str: the string parameter to copy to new memory location.
 * Return: pointer to the new memory location.
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	for (i = 0; str[i]; i++)
		;

	s = malloc(sizeof(char) * (i + 1));

	if (s != 0 && str != 0)
	{
		for (; i >= 0; i--)
			s[i] = str[i];
		return (s);
	}
	return (0);
}

