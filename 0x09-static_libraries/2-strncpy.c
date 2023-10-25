#include "main.h"

/**
 * _strncpy - C func that copies a string
 *
 * @dest: the first string
 * @src: the second string
 * @n: the bytes of the first string
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
