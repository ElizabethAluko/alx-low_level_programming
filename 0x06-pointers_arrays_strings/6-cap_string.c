#include "main.h"

/**
 * *cap_string - a function that capitalizes all
 * words of a string.
 * @s: string to capitalize his word.
 * Return: the string with each of its words capitalized.
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = i - 1;

			if (
					i == 0 ||
					s[j] == ' ' ||
					s[j] == '\t' ||
					s[j] == '\n' ||
					s[j] == ',' ||
					s[j] == ';' ||
					s[j] == '.' ||
					s[j] == '!' ||
					s[j] == '?' ||
					s[j] == '"' ||
					s[j] == ')' ||
					s[j] == '(' ||
					s[j] == '{' ||
					s[j] == '}')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
