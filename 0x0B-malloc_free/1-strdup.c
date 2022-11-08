#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: NULL if str=NUL,
 * returns a pointer to the duplicated string if successful
 * and returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *strcp;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	strcp = malloc(sizeof(char) * i + 1);

	if (strcp == NULL)
		return (NULL);

	while (j < i)
	{
		strcp[j] = str[j];
		j++;
	}
	return (strcp);
	free(strcp);
}
