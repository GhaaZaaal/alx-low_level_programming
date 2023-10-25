#include "main.h"

/**
 * _memcpy - C func that copies memory area
 *
 * @dest: the pointer memory
 * @src: the string pointer
 * @n: the copy of the pointer src
 *
 * Return: the pointer memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
