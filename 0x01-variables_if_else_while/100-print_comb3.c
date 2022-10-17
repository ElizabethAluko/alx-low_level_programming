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

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(j);
				putchar(i);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
