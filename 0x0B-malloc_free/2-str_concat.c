#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: newly memory space allocated pointer.
 * return empty if NULL is passed and NULL if failed.
 */
char *str_concat(char *s1, char *s2)
{
	char *nwstr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;

	if (s1[i] == '\0')
	{
		i = 0;
	}
	else
	{
		while (s1[i] != '\0')
			i++;
	}

	if (s2[j] == '\0')
		j = 0;
	else
	{
		while (s2[j] != '\0')
		j++;
	}

	nwstr = malloc(sizeof(char) * (i + j) + 1);
	if (nwstr == 0)
		return (0);
	while (k < i)
	{
		nwstr[k] = s1[k];
		k++;
	}
	if (s2[0] == '\0')
		j = 0;
	while (k < (i + j))
	{
		nwstr[k] = s2[l];
		k++;
		l++;
	}
	nwstr[(i + j)] = '\0';
	return (nwstr);

	free(nwstr);
}
