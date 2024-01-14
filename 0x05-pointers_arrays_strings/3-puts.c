#include "main.h"

/**
 * _puts - C function that prints a string followed by new line to stdout
 *
 * @str: the value of the string
 *
 * Return: the string and new line to stdout
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
