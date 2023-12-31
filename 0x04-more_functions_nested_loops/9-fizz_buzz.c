#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100.
 * but for multiples of 3, it prints fizz
 * for multiples of 5, it prints buzz.
 * for multtiples of both 3 & 5, it prints fizz buzz
 * Return: Always 1 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
