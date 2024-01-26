#include "variadic_functions.h"

/**
 * print_all - prints everything.
 * @format: a list of types of arguements passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *s, *split;
	int i = 0;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			if (i == 0)
				split = "";
			if (i != 0)
				split = ", ";
			switch (format[i])
			{
				case 'c':
					printf("%s%c", split, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", split, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", split, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", split, s);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}
	va_end(list);
	printf("\n");
}
