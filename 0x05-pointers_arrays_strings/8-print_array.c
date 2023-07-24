#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *               followed by a new line.
 * @a: the array to print
 * @n: the number of integers to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("%d\n", a[0]);
	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}

		printf("%d, ", a[i]);
	}
}
