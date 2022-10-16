#include <stdio.h>

/**
 * main - prints the lowetcase alphabet in reverse.
 * Return: 0 if successful.
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		printf("%c", n);
	printf("\n");
	return (0);
}
