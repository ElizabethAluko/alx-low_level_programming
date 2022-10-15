#include <stdio.h>

/**
 * main - print all alphabet except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
