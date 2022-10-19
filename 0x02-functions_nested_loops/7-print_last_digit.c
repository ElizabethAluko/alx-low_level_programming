#include "main.h"

/**
 * print_last_digit - a function that prints the
 * last digit of a number.
 * @n: number to print the last digit.
 * Return: the last digit if successful.
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (n >= 0)
	{
		i = i;
	}
	else if (n < 0)
	{
		i *= -1;
	}
	_putchar(n + '0');
	return (i);
}
