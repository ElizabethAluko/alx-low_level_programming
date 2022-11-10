#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: pointer to the arguments (string).
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i  argv[i]);
	return (0);
}
