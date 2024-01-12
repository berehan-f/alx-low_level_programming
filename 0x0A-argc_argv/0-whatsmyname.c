#include <stdio.h>

/**
 * main - prints the program name followed by a new line.
 * @argc: the number of command line arguements.
 * @argv: a vector that contains command line arguements.
 * Return: 0 on success.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
