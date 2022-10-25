#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * Numbers are separated by comma, followed by a space.
 * Numbers are displayed in the same order as they are stored.
 * @a:array of integers
 * @n:numbers of elements of the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++);
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
