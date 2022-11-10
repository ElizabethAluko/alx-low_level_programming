#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: pointer that point to a newly allocated
 * space in memory, which contains s1, followed by
 * the first n bytes of s2, and null terminated.
 * If the function fails, it returns NULL.
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (n + len1 + 1));
	
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[i + len1] = s2[i];

	str[i + len1] = '\0';

	return (str);
}
