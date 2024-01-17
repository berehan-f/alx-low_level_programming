#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with specific char
 * @size: size of the array to be created.
 * @c: the character with which to initialize the array.
 * Return: pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (str != 0 && size != 0)
	{
		for (i = 0; i < size; i++)
			str[i] = c;
		return (str);
	}
	return (0);
}
