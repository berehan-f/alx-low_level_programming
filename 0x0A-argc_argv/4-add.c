#include <stdio.h>
#include <stdlib.h>

/**
 * non_digit - checks if a string contains a non digit character.
 * @s: the string to check.
 * Return: 1 if the string contains a non digit character, 0 otherwise.
 */

int non_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (1);
		s++;
	}
	return (0);
}

/**
 * main - adds positive number and print the result followed by a new line.
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector containing command line arguments.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (non_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
