#include "main.h"

/*
 * reset_to_98 - a function that takes a pointer
 * to an int as parameter and updates
 * the value it points to to 98.
 * @*n: pointer variable
 */
void reset_to_98(int *n)
{
	int *n;
	int i = 98;
	*n = &i;
	_putchar(*n);
}
