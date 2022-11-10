#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds two numbers and print the result
 * @argc: number of arguments
 * @argv: pointer to the arguments.
 * Return: 0 if successful
 * print 0, if no number is passed to the program
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		return (0);
		printf("\n");

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Erroe\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
