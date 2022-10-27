#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers.
 * @a: the array
 * @n: the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
