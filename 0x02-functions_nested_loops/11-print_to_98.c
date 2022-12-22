#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers
 * from n to 98, followed by a new line.
 */
void print_to_98(int n)
{
	int j;

	for (j = n; j < 98; j++)
	{
		printf("%d, ", j);
	}
	printf("%d", j);
}
