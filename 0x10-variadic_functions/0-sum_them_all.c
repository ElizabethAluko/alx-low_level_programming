#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of argument.
 * Return: returns the sum of all the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
