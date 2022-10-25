#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed.
 * Return: 0 if successful
 */
void rev_string(char *s)
{
	int i, rlen, nlen;
	char hold;

	rlen = 0;
	nlen = 0;

	while (s[rlen] != '\0')
	{
		rlen++;
	}

	nlen = rlen - 1;


	for (i = 0; i < rlen / 2; i++)
	{

		hold = s[i];
		s[i] = s[nlen];
		s[nlen--] = hold;
	}

}
