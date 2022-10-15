#include <stdio.h>

/**
 * main - print lowercase alphabeth using putchar and only twice
 * Return: zero if successful
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
