#include "search_algos.h"


/**
 * binary_search - searches for a value in an array
 * using binary search.
 * @array: Array of integers to search
 * @size: number of elements in the array.
 * @value: the element ti search for.
 * Return: -1 if value is not in the array or array Null.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, u = 0;
	size_t s = size - 1;
	int m;

	if (array == NULL)
	{
		return (-1);
	}

	while (u <= s)
	{
		printf("Searching in array: ");

		for (i = u; i < s; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = u + (s - u) / 2;

		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			u = m + 1;
		}
		else
		{
			s = m - 1;
		}
	}
	return (-1);
}
