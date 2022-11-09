#include<stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: the number of arguments in the function.
 * @argv: the arguments values.
 * Return: 0 if successful.
 */
int __attribute__((unused)) main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
