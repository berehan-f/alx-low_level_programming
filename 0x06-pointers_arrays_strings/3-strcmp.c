#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string to compare.
 * @s2: second string to compare.
 * Return: 0 if s1 and s2 are equal
 *         - number if s1 is greater than s2.
 *         + number if s2 is greater than s1.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	do {
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	} while (s1[i] != 0 && s2[i++] != 0);

	return (0);
}
