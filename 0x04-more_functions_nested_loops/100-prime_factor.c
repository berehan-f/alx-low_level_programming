#include <stdlib.h>
#include <stdio.h>
/**
 * main - finds and prints the largest prime factors of the number 612852475143
 *        followed by a new ine.
 * Return: always 0 on succesa.
 */

int main(void)
{
	long num = 612852475143;
	int i;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i = 2;
		}
	}

	printf("%ld\n", num);
	return (0);
}
