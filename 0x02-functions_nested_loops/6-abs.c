#include "main.h"

/**
 * _abs - a function that computes the absolute value
 * of an integer.
 * @n: an integer to compute its abs value
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	return (0);
}
