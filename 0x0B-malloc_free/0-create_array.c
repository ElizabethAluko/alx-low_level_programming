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
	char *s;
	s = malloc(sizeof(char) * size);
	s[size];
	s[0] = 'c';

	free(s);
}