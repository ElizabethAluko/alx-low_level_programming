#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times
 * the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	char n = 'a';
	int i = 0;

	while (i < 10)
	{
		while ( n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
