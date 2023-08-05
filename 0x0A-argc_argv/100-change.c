#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change,
 *         for an amount of money.
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector containing command line arguments.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int money, coins = 0;

	money = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
		printf("0\n");
	while (money > 0)
	{
		if (money >= 25)
		{
			coins += (money / 25);
			money %= 25;
		}
		else if (money >= 10)
		{
			coins += (money / 10);
			money %= 10;
		}
		else if (money >= 5)
		{
			coins += (money / 5);
			money %= 5;
		}
		else if (money >= 2)
		{
			coins += (money / 2);
			money %= 2;
		}
		else if (money >= 1)
		{
			coins += (money / 1);
			money %= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
