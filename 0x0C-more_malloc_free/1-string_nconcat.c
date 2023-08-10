#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string to be concatenated.
 * @s2: the second string to be concatenated.
 * @n: the number of characters from s2 to be concatenated.
 * Return: a pointer to the concatenated string/
 *         or NULL if the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, stringlength;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (n < j)
		j = n;

	stringlength = i + j;
	string = (char *) malloc(sizeof(char) * (stringlength + 1));

	if (string == NULL)
		return (NULL);

	while (*s1)
	{
		*string++ = *s1++;
	}

	for (i = 0; i < j; i++)
	{
		*string++ = *s2++;
	}

	*string = '\0';

	return (string - stringlength);
}
