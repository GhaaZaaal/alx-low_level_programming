#include "main.h"

/**
 * _strlen - C function that returns the length of a string
 *
 * @s: the value of the string
 *
 * Return: the integer number of the length
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);

}
