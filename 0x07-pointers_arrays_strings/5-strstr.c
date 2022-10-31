#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: string that will be searched.
 * @needle: string that will be searched for.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (s + i);
		}
	}
	return (0);
}
