#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates
 * all the arguments of your program.
 * @ac: number of arguments passed to the program.
 * @av: pointers array to the argument.
 * Return: NULL if ac == 0 or av == NULL.
 * returns a pointer to a new string if successful and
 * NULL if failed.
 */
char *argstostr(int ac, char **av)
{
	char *nwstr;
	int i, size, arg, narg = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (size = 0; av[arg][size]; size++)
			narg++;
	}

	nwstr = malloc(sizeof(char) * narg + 1);

	if (nwstr == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (size = 0; av[arg][size]; size++)
			nwstr[i++] = av[arg][size];
		nwstr[i++] = '\n';
	}

	nwstr[narg] = '\0';

	return (nwstr);
}
