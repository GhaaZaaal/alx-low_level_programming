#include "main.h"

/**
 * print_rev - C function that reverse the string
 *
 * @s: the value of the string
 *
 * Return: the reversed string
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
