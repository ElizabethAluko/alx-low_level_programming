#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 * Return: time of the day
 */
void jack_bauer(void)
{
	int i, j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
}

