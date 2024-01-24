#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @ac: number of command line arguements.
 * @av: array of command line arguements.
 * Return: 0 on success.
 */

int main(int ac, char **av)
{
	int i, bytes;
	char *s;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
			printf("%02hhx\n", s[i]);
		else
			printf("%02hhx ", s[i]);
	}
	return (0);
}
