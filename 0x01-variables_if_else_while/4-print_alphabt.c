#include <stdio.h>

/**
 * main - print all alphabet except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char n = 'a';

	while ((n <= 'z') && (n != 'q') && (n != 'e'))
		putchar(n);
	putchar('\n');
	n++;
	return (0);
}
