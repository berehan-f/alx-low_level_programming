/**
 * int_index - searches for an integer.
 * @array: the array from where to search.
 * @size: size of the array.
 * @cmp: searching condition.
 * Return: index of the first element,
 *         for which the cmp function does not return 0.
 *         -1 if no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
