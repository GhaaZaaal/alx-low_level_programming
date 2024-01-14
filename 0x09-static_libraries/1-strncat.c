#include "main.h"

/**
 * _strncat - C func that concatenates two strings
 *
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];

	dest[x + y] = '\0';

	return (dest);
}
