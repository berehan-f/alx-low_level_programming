#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator between them,
 *                 followed by a newline.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i;
	int num;

	va_start(int_list, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != 0)
			printf("%s", separator);

		num = va_arg(int_list, int);

		printf("%d", num);
	}

	va_end(int_list);
	printf("\n");
}
