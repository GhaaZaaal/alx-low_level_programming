#include "main.h"

/**
 * wildcmp - C func compares two strings
 *
 * @s1: the first string
 * @s2: the string that will be checked
 *
 * Return: 1 if identical 0 other wise
*/

int inception(char *s1, char *s2);
char *last_star(char *s2);

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (!*s1 && *s2 == '*' && !*last_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);

		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);

	if (*s2 == '*')
	{
		s2 = last_star(s2);

		if (!*s2)
			return (1);

		if (*s1 == *s2)
			i = i + wildcmp(s1 + 1, s2 + 1);
		i = i + inception(s1, s2);
		return (!!i);
	}
	return (0);
}

/**
 * last_star - is a checker for the last '*' in the string
 *
 * @s2: the string that will be checked
 *
 * Return: s2
*/
char *last_star(char *s2)
{
	if (*s2 == '*')
		return (last_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - is helper to check for the diffrences
 *
 * @s1: the first string
 * @s2: the string that will be checked
 *
 * Return: the value of the compare
*/
int inception(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		i = i + wildcmp(s1 + 1, s2 + 1);
	i = i + inception(s1 + 1, s2);
	return (i);
}
