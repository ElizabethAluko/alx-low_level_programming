#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: string that accept another string
 * @src: string to copy
 * @n: number of bytes to copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
