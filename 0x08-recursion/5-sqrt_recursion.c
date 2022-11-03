#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 * Return: square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n ==_sqrt_recursion(int n) 0)
		return (0);
	if (n == 1)
		return (1);

	return (n ^ (1 / 2) * _sqrt_recursion(n));
}
