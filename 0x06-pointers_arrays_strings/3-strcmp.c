#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Returns: 0 if s1 and s2 are equal,
 * a negative value if s1 is less than s2.
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i = j)
	{
		return (0);
	}
	
	else if (i < j)
	{
		return (i-j);
	}

	else if (i > j)
	{
		return (i -j);
	}
}