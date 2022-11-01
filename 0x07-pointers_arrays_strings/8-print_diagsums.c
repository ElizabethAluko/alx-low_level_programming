#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: square array.
 * @size: of the array.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	long s1 = 0;
	long s2 = 0;

	for (i = 0, j = 0, k = size - 1; (i < 20) && (j < size) && (k > -1); i++, j++, k--)
	{
		s1 += *(a + size * i + j);
		s2 += *(a + size * i + k);
	}
	printf("%ld, %ld\n", s1, s2);
}
