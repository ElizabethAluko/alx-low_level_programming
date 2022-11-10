#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and print the result
 * @argc: number of arguments
 * @argv: pointer to the arguments.
 * Return: 0 if successful
 * If the program does not receive two arguments,
 * the program should print Error,
 * followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, prd;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prd = n1 * n2;

		printf("%d\n", prd);
	}
	return (0);
}
