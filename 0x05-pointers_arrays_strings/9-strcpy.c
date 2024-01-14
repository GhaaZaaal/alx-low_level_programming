#include "main.h"

/**
 * _strcpy - C function that copies the string
 *
 * @dest: the value of the string
 * @src: the value of the string
 *
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
