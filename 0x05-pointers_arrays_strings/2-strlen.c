#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string to return its lenght.
 * Return: the lenght of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
