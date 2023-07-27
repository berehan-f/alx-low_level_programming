#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @c: the string to encode.
 * Return: the encoded string.
 */

char *leet(char *c)
{
	int i, j;
	char leet1[] = {'a', 'e', 'o', 't', 'l'};
	char leet2[] = {'A', 'E', 'O', 'T', 'L'};
	char code[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == leet1[j] || c[i] == leet2[j])
				c[i] = code[j];
		}
	}

	return (c);
}
