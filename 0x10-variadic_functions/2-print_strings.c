#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: number of string arguements passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *s;

	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != 0)
			printf("%s", separator);

		s = va_arg(string_list, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
	}
	va_end(string_list);
	printf("\n");
}
