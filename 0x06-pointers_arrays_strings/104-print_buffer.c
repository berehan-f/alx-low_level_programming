#include <stdio.h>

/**
 * print_line - prints one line of specified buffer.
 * @b: the buffer to print.
 * @size: the number of characters that should be printed.
 * @p: starting position of the buffer to print.
 */

void print_line(char *b, int size, int p)
{
	int i;

	printf("%8.8x: ", (unsigned int)p);

	for (i = 0; i < 10; i++)
	{
		if (i < size)
			printf("%2.2x", (unsigned int) *(b + i));
		else
			printf("%2s", "  ");

		if (i % 2 != 0)
			printf(" ");
	}
	for (i = 0; i < size; i++)
	{
		if (b[i] > 31)
			printf("%c", b[i]);
		else
			printf(".");
	}
	printf("\n");
}

/**
 * print_buffer - prints a buffer.
 * @b: the buffer to print.
 * @size: the number of characters to print.
 */

void print_buffer(char *b, int size)
{
	int i;
	int total_lines = size / 10;
	int last_line_size = size % 10;

	if (last_line_size != 0)
		total_lines += 1;
	if (total_lines <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < total_lines; i++)
	{
		if (i == total_lines - 1 && last_line_size != 0)
			size = last_line_size;
		else
			size = 10;
		print_line(b + i * 10, size, i * 10);
	}
}
