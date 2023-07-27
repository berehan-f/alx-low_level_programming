#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @src: the string source to copy from.
 * @dest: the string to concatenate contents of src to
 * @n: the number of characters to concatenate.
 * Return: destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[j] != 0; j++)
		;
	if (n <= j)
	{
		for (k = 0; k < n; k++)
			dest[i++] = src[k];
		_putchar(0);
	}
	else
	{
		for (k = 0; k <= j; k++)
			dest[i++] = src[k];
	}

	return (dest);
}
