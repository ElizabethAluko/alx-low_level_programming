#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: number of the elements in the array.
 * @cmp: pointer to the function to be used to compare values
 * Returns: returns the index of the first element
 * for which cmp function does not return 0
 * returns -1 if no element matches.
 * returns -1 if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
