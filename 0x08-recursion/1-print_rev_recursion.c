#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to print in resverse order.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		*s =  (
		_putchar(*s + i);
		_print_rev_recursion(*s + i - 1);
	}
	else
		_putchar('\n');
}
