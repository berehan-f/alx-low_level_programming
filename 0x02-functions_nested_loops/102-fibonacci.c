#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 & 2.
 * Return: 0 on successful completion.
 */

int main(void)
{
	long int tmp;
	long int i = 1;
	long int j = 2;
	int count = 2;

	printf("1, 2, ");
	while (count < 49)
	{
		printf("%ld, ", i + j);
		tmp = i + j;
		i = j;
		j = tmp;
		count++;
	}
	if (count == 49)
		printf("%ld\n", j);
	return (0);
}
