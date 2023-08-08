#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with specific char.
 * @size: the size of the array of chars.
 * @c: array initialization value.
 * Return: a pointer to the array, NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *) malloc(sizeof(char) * size);
	if (s != 0 && size != 0)
	{
		for (i = 0; i < size; i++)
			*(s + i) = c;
		return (s);
	}
	return (0);
}
