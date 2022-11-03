#include "main.h"

int get_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * get_strlen - get the string lenght.
 * @s: the string.
 * Return: string lenght.
 */

int get_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + get_strlen(s + 1));
}

/**
 * check_palindrome - check if the palindrome.
 * @s: the string.
 * @len: lenght of the string.
 * @i: s index.
 * Return: 1 if true and 0 if not.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = get_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
