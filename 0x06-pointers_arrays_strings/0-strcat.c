#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: source string to copy from
 * @dest: destination string to concatenate to
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[j] != 0; j++)
		;
	for (k = 0; k <= j; k++)
		dest[i++] = src[k];
	return (dest);
}
