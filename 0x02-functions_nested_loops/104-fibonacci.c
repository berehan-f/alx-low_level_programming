#include <stdlib.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 & 2.
 * Return: 0 on successful completion.
 */

int main(void)
{
	unsigned long tmp;
	unsigned long i = 1;
	unsigned long j = 2;
	int count = 2;

	printf("1, 2, ");
	while (count < 98)
	{
		if (count == 97)
			printf("%lu\n", i + j);
		else
			printf("%lu, ", i + j);
		tmp = i + j;
		i = j;
		j = tmp;
		count++;
	}
	return (0);
}
