#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed.
 * Return: 0 if successful
 */
void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{

		return (*s[j]);
	}
	_putchar('\n');
}
