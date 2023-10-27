#include "main.h"

/**
 * string_nconcat - C func that concatenates two strings
 *
 * @s1: the pointer of the first string
 * @s2: the pointer of the second string
 * @n: the number of bytes
 *
 * Return: if fail return null if n >= s2 return s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		s[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s[l++] = s2[i];

	s[l] = '\0';

	return (s);
}
