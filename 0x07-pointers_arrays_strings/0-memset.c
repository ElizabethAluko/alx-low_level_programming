#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the memory.
 * @b: constant byte.
 * @n: bytes of the memory.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	n = 0;
	int i = 1;

	while (i <= n)
	{
		*s = 'b';
		i++;
	}
	return (s);
}
