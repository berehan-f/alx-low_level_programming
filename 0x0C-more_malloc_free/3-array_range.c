#include <stdlib.h>

/**
 * array_range - creates an array of integers. The array created should contain
 *               all values from min (included) to max (included) ordered from,
 *               min to max.
 * @min: the minimum number to fill the array with.
 * @max: the maximum number to fill the array with.
 * Return: pointer to the created array.
 *         or NULL if min > max or malloc fails.
 */

int *array_range(int min, int max)
{
	int length, i;
	int *array;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	array = malloc(length * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		array[i] = min + i;

	return (array);
}
