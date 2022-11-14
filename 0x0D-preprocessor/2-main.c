#include <stdio>

/**
 * main - prints the name of the file it was compiled
 * from, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: 0 if successful.
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argc;
	printf("%c\n", argv[0]);
	return (0);
}
	
