#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: reference argument.
 * Return: returns the sum of all the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int i;
	int sum = 0;

	va_start(a, n);
	if (n == 0)
		return (0);

	for (i = n; i >= 0; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
