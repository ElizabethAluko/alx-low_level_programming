#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: square array.
 * @size: of the array.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i += size + 1)
	{
		sum1 += a[i];

		for (j = size - 1; j >= 0; j += size - 1)
		{
			sum2 += a[j];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
