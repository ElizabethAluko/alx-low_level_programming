#include "main.h"

/**
 * print_diagonal - function that draws
 * a diagonal line
 * @n: number of times the character is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				_putchar('\\');
			}
			else
			{
				for(j = 1; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
