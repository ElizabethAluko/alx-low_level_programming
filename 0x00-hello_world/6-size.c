#include <stdio.h>

/**
 * main - C program that prints the size of various types on the computer.
 * Return: zero if successful, otherwise nonzero
 */

int main(void)
{
	printf("Size of a char variable: %d byte(s)\n", sizeof(char));
	printf("Size of an int variable: %d byte(s)\n", sizeof(int));
	printf("Size of a long int variable: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int variable: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float variable: %d byte(s)\n", sizeof(float));
	return (0);
}
