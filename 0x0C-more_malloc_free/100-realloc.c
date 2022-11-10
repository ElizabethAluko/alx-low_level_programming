#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *nptr;
	char *copy, *tmp;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	copy = ptr;
	nptr = malloc(sizeof(*copy) * new_size);
	if (nptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmp = nptr;

	for (i = 0; i < old_size && i < new_size; i++)
		tmp[i] = *copy++;
	free(ptr);
	return (nptr);
}

