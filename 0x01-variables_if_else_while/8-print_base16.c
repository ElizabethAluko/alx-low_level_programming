#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase.
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	char x;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
