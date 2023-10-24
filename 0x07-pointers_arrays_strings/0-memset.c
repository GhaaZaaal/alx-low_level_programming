#include "main.h"

/**
 * _memset - C func that fills memory with a constant byte
 *
 * @s: the first string pointer
 * @b: the value of the pointer
 * @n: the memory bytes
 *
 * Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
