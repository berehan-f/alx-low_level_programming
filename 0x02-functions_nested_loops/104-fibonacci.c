#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 *        followed by a new line.
 * Return: always 0 on success.
 */

int main(void)
{
	int i, j = 1, k = 2, fib;

	printf("%d, %d, ", j, k);

	for (i = 0; i < 98; i++)
	{
		fib = j + k;
		j = k;
		k = fib;
		printf("%d, ", fib);
	}

	return (0);
}
