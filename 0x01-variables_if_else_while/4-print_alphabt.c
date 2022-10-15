#include <stdio.h>

/**
 * main - print all alphabet except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n != 'q'; n != 'e';  n++)
		putchar(n);
	putchar('\n');
	return (0);
}
