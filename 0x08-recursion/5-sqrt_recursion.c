#include "main.h"

int sqrt(double num, int r);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 * Return: square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (sqrt(num, r));
}

/**
 * sqrt - finds the square root of a number.
 * @num: the number.
 * @r: root of the number.
 * Return: the number and its roots.
 */

int sqrt(int num, int r)
{
	if ((r * r) == num)
		return (r);
	if (r == num / 2)
		return (-1);
	return (sqrt(num, r + 1));
}
