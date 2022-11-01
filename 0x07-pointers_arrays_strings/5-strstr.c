#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: string that will be searched.
 * @needle: string that will be searched for.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * if needle is an empty string, haystack itself will be returned
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
