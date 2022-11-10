#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_num(char *str);

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

	for (i = 0; i < argc; i++)
	{
		if (is_num(argv[i]))
		{
			num = atoi(argv[i]);

			if (num > 0)
			{
				sum += num;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * is_num - check whether the given arg is an interger.
 * @str: the arg to check.
 * Return: 0 or 1
 */
int is_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
