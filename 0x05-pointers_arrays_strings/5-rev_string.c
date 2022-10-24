#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed.
 * Return: 0 if successful
 */
void rev_string(char *s)
{
	int i, j, len, _rev;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = 0; j < len / 2; j++)
	{
		_rev =s[j];
		s[j] = s[len - 1];
		s[(len - 1)--];
	}
}
