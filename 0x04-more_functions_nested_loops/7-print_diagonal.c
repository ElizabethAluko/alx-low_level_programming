#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * on the terminal.
 * @n: number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for(j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
