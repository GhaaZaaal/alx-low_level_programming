#include "main.h"

/**
 * _strpbrk - C func that searches a string for any of a set of bytes
 *
 * @s: the string pointer
 * @accept: the search result
 *
 * Return: the bytes in s match bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
