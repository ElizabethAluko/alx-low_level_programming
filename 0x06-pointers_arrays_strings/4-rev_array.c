#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers.
 * @a: the array
 * @n: the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i, hold;
	int j = n - 1;

	for (i = j; i >= n / 2; i--)
	{
		hold = a[j - i];
		a[j - i] = a[i];
		a[i] = hold;

	}
}
