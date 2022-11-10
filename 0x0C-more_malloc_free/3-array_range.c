#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: smallest integer.
 * @max: largest integer.
 * Return:  pointer to the newly created array.
 * If min > max, return NULL
 * If malloc fails, return NULL
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = (int *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
