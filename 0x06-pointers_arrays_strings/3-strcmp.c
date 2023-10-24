#include "main.h"

/**
 * _strcmp - C func that compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the result of the compare
*/

int _strcmp(char *s1, char *s2)
{
	int same = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}
	return (same);
}
