#include "main.h"

/**
 * puts2 - a function prints every other character
 * of a string, starting with the first character
 * followed by a new line.
 * @str: a string to print its characters.
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			break;
		}
	}

	_putchar('\n');
}

