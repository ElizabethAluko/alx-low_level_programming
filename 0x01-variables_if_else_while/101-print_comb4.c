#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * different digits and smallest combination.
 * Return: 0 if successful.
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 58; i++)
	{
		for (j = 49; j <= 58; j++)
		{
			for (k = 50; k <= 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 48 || j != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
