#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number to convert.
 * Return: converted number, or 0 if
 * there is one or more chars in the string b
 * that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else
			return (0);
		b++;
	}
	return (i);
}
