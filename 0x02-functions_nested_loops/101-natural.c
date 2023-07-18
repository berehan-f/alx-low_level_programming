#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *        followed by a new line.
 * Return: 0 on successful completion.
 */

int main(void)
{
	int sum = 0;
	int x = 0;

	while (x < 1024)
	{
		if (x % 3 == 0)
			sum += x;
		else if (x % 5 == 0)
			sum += x;
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
