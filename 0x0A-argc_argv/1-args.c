#include <stdio.h>

/**
 * main - printa the number of arguments received.
 * @argc: number of arguments
 * @argv: pointer to the arguments (string).
 * Return: 0
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
