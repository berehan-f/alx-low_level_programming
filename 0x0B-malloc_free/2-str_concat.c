#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * Return: a pointer to a newly allocated space in memory which contains,
 *        the contents of s1 followed by the contents of s2 and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == 0)
		return (0);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (; k < i + j + 1; k++)
		str[k] = *s2++;
	return (str);
}
