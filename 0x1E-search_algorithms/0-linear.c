#include "search_algos.h"


/**
 * linear_search - search for an element in a list using linear algorithm.
 * @array: the array to search
 * @size: the number of elements in the array.
 * @value: the element we want to search for.
 * Return: -1 if not successful or not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
