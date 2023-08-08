#include <stdlib.h>

/**
 * str_concat - concatenates two strings, NULL is treated as empty string.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * Return: a string pointer to a newly allocated space in memory that contains
 *         the contents of s1, followed by the contents of s2 & null terminated
 *         return 0 on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (j = 0; s2[j]; j++)
		len++;

	concat = (char *) malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	for (k = 0; k <= j; k++)
		concat[i++] = s2[k];

	return (concat);
}
