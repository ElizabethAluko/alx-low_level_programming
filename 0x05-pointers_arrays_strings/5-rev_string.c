#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed.
 * Return: 0 if successful
 */
void rev_string(char *s)
{
	int i, j, rlen, nlen;
	char hold;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	rlen = i;
	nlen = rlen - 1;


	for (j = 0; j < rlen / 2; j--)
	{

		hold = s[j];
		s[j] = s[nlen];
		s[nlen--] = hold;
	}
	_putchar('\n');
}
