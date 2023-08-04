#include <stdio.h>

/**
 * main - prints all command line arguments it receives.
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector containing command line arguements.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
		printf("%s\n", argv[i++]);
	return (0);
}
