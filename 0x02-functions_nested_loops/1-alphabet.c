#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase.
 * Return: 0 if successful.
 */
void print_alphabet_x10(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

