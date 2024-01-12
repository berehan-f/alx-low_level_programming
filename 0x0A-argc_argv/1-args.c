#include "stdio.h"

/**
 * main - prints the number of arguments passed to the program.
 * @argc: the number of arguments passed to the program including its name.
 * @argv: a vector that contains command line arguments.
 * Return: 0 on success.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
