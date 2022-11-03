#include "main.h"

/**
 * _pow_recursion - a function returns the value of
 * x raised to the power of y.
 * @x: the number.
 * @y: the power.
 * Return: x raised to power y.
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);

	result = x *  _pow_recursion(x, y - 1);
	return (result);
}
