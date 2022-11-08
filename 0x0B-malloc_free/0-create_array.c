#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: specific character to initialize with.
 * Return: NULL if size = 0 and,
 * a pointer to the array or NULL if it fails.
 */
void *malloc(size_t size);
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(char) * size);

	if(size == 0)
		return(NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	free(s);
	return (s);
}
