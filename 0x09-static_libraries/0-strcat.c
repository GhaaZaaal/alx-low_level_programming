#include "main.h"

/**
 * _strcat - C func that concatenates two strings
 *
 * @dest: the first string
 * @src: the second string
 *
 * Return: the result of the concatenates
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; src[y]; y++)
		dest[x++] = src[y];

	return (dest);
}
