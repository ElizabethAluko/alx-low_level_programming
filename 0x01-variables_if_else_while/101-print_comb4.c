#include <stdio>

/**
 * main - prints all possible different combinations of three digits.
 * different digits and smallest combination.
 * Return: 0 if successful.
 */
int main(void)
{
	int i, j, k;

	for (i = 47; i <= 55; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 49; k <= 57; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
