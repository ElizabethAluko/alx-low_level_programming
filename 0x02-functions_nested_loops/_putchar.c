#include <unistd.h>

/**
 * main - print
 * Return: 0 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
