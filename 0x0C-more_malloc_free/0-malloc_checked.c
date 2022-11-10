#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: bytes number.
 * Return: pointer to the allocated memory.
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);
	free(str);
	return (str);
}
