#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: total number of arguments that is passed to the function.
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	int sum = 0;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num_list, int);

	va_end(num_list);

	return (sum);
}
