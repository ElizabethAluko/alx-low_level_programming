#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to find its factorial.
 * Return: n factorial.
 */
int factorial(int n)
{
	int ftr;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	ftr = n * factorial (n - 1);

	_putchar('\n');
	return (ftr);
}
