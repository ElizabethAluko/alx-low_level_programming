#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 from zero.
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
}
