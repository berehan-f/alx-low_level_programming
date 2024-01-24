#include "3-calc.h"

/**
 * main - perform basic calculation.
 * @argv: array of command line arguements.
 * @argc: number of command line arguements.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", func(a, b));
	return (0);
}
