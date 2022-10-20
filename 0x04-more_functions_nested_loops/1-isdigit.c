include "main.h"

/**
 * _isdigit - function that checks for a digit 0 to 9
 * @c: variable to check
 * Return: 1 if c is a digit and 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
