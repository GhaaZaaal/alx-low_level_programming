#include "main.h"

/**
 * _strlen_recursion - C func that returns the length of a string
 *
 * @s: the string that will be printed
 *
 * Return: the string length
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i = i + _strlen_recursion(s + 1) + 1;
	}

	return (i);
}
