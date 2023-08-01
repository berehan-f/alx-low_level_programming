#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of square matrix of integers.
 * @a: the matrix in question.
 * @size: the size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, diagsum1 = 0, diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		diagsum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
