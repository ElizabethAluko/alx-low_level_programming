#include "main.h"

/**
 * print_last_digit - a function that prints the
 * last digit of a number.
 * @n: number to print the last digit.
 * Return: the last digit if successful.
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = -i;
	}
	return (i);
}
