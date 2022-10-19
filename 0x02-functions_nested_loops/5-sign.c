#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: number to check
 * Return: 1 or 0, and print + or -
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar(0);
		i = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
