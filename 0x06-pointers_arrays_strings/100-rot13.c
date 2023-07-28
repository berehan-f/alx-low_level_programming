#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @c: the string to encode.
 * Return: the encoded string
 */

char *rot13(char *c)
{
	int i, j;
	char cipher1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == cipher1[j])
			{
				c[i] = cipher2[j];
				break;
			}
		}
	}

	return (c);
}
