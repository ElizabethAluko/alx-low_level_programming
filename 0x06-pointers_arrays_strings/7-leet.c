#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: string to encode.
 * Return: pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char a[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
