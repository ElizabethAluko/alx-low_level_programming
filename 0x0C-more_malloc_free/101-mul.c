#include "main.h"

/**
 * main - multiplies 2 arguments
 * @argc: number of argument
 * @argv: array of the argument
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
}
