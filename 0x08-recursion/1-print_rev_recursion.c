#include "main.h"

/**
 * _print_rev_recursion - C func that prints a string in reverse
 *
 * @s: the string that will be printed
 *
 * Return: the string in reverse
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
