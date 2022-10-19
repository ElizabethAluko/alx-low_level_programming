#include "main.h"

/**
 * print_last_digit - a function that prints the
 * last digit of a number.
 * @n: number to print the last digit.
 * Return: the last digit if successful.
 */
int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	_putchar(n + '0');
	return (i);
}
