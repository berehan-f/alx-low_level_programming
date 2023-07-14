#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *        prints all letters except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);

}
