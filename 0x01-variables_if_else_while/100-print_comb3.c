#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * different two digits
 * smallest combination of two digits all arranged in ascending order.
 * Return: 0 if possitive
 */
int main(void)
{
	int i = 0;
	int j, k;

	while (i <= 99)
	{
		j = (i + '0');
		k = (i % 10 + '0');

		if (j < k)
		{
			putchar(j);
			putchar(k);

			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
