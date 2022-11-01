#include "main.h"

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

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];

		for (j = size - 1; j >= 0; j--)
		{
			sum2 += a[i][j];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
