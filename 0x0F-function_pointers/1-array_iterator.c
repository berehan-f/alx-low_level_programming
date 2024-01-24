#include <stddef.h>

/**
 * array_iterator - executes a given function parameter on each array element.
 * @size: size of array.
 * @array: the array on which the function is executed.
 * @action: the given function parameter.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
