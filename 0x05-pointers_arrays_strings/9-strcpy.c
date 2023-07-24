#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the terminating
 *           null byte to the buffer pointed to by dest.
 * @src: the source of the string to copy from
 * @dest: desstination buffer to which we copy our string.
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
		i++;
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
