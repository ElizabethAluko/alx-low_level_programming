#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated
 * if it contains n or more bytes.
 * @dest: Fist string.
 * @src: second string.
 * @n: nunber of bytes.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
