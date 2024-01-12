#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments to the program.
 * @argv: a vector that contains command line arguments.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
