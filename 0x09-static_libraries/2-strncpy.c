#include "main.h"

/**
 * _strncpy - copies a string.
 * @src: the source string to copy from.
 * @dest: the destination buffer to copy to.
 * @n: the number of characters to copy.
 * Return: the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = 0;

	return (dest);
}
