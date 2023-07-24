#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	char tmp;
	int i = 0, j = 0;

	while (s[i] != 0)
		i++;
	while (j < --i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j++] = tmp;
	}
}
