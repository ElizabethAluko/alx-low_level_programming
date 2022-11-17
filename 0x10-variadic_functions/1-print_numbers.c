#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list p;

	va_start(p, *separator, n);

	if (*sepeartor == NULL)
		printf("");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(p, int));
	}
	va_end(p);
}
