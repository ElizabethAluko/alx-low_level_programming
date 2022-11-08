#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: number of column.
 * @height: number of row.
 * Return: NULL on failure or if
 * width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int *arr;
	int i, j;
	arr[width][height];

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
