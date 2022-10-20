#include "main.h"

/**
 * _isupper - function checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase and 0 if not.
 */
int _isupper(int c)
{
	if (c >= A && c <= Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
