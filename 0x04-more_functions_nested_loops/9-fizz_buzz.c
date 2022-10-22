#include <stdio.h>

/**
 * main - a program that prints the numbers from
 * 1 t0 100, Fizz for multiple of three,
 * Buzz for multiple of five
 * and FizzBuzz for multiples of both 5 and 3.
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf('\n');
	return (0);
}
