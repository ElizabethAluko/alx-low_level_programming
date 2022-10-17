#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * different two digits
 * smallest combination of two digits all arranged in ascending order.
 * Return: 0 if possitive
 */
int main(void)
{
	int i, j;
	
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
