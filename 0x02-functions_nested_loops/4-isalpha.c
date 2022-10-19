#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the character to check
 * Return: 1 if c is an alphabet, lower or uppercase
 * otherwise zero
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
