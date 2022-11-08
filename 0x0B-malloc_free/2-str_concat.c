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
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	if (s1[i] == '\0' && s2[j] == '\0')
		return (0);

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	nwstr = malloc(sizeof(char) * (i + j) + 1);

	while (k < i)
	{
		nwstr[k] = s1[k];
		k++;
	}
	while (k < (i +j))
	{
		nwstr[k] = s2[l];
		k++;
		l++;
	}
	return (nwstr);
}
