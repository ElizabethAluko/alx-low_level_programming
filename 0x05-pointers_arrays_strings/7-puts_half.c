#include "main.h"

/**
 * puts_half - a function prints the second half
 * of a string, followed by a new line.
 * and if the number of character is odd
 * print n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 * @str: string to print its second half characters.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
