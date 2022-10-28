#include "main.h"

/**
 * print_number - function that print an integer.
 * @n: integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}

	if (n / 10 > 0)
	{
		_putchar(n / 10);
	}

	_putchar((n % 10) + '0');
}
