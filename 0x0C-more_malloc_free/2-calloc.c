#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc,
 *           and the memory is set to zero.
 * @nmemb: the number of elements of the array.
 * @size: the size in bytes of each elements of the array.
 * Return: a pointer to the allocated memory.
 *         0 if nmemb or size is 0 or malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	array = malloc(nmemb * sizeof(size));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
