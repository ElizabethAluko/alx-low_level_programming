#include "main.h"

void _print_rev_recursion(char *s);
int get_len(char *s);

/**
 * get_len - gets the lenght of the string.
 * @s: string.
 * Return: thd string lenght.
 */
int get_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return ((1 + get_len(s + 1)));
}


/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to print in resverse order.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	char tmp;
	char len = get_len(s);

	if (s[i] == s[len / 2])
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i--;
		_print_rev_recursion(*s);
	}
	return (*s);
}
