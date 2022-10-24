#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: integers that its value will be swapped.
 * @b: integers that another integer swapped to.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
