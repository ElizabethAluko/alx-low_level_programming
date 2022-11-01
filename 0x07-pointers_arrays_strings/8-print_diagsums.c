#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: square array.
 * @size: of the array.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = size - 1;

	long s1 = 0;
	long s2 = 0;

	while ((i < 20) && (j < size) && (k > -1))
	{
		s1 += *(a + size * i + j);
		s2 += *(a + size * i + k);

		i++;
		j++;
		k--;
	}
	printf("%ld, %ld\n", s1, s2);
}
