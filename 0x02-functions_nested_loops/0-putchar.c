#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char word[9] = "_putchar";

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');
	return(0);
}
