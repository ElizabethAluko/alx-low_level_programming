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
			if (i < 10 && j < 10)
			{
				_putchar('0');
				_putchar(j);
				_putchar(':');
				_putchar('0');
				_putchar(i);
				_putchar('\n');
			}
			else
			{
				_putchar(j);
				_putchar(':');
				_putchar(i);
				_putchar('\n');
			}
		}
	}
}

