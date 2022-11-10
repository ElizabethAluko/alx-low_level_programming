#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of arrar elements
 * @size: number of bytes.
 * Return: a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(a + i) = 0;
	return (a);
}
