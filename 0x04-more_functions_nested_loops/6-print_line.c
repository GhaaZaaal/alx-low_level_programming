#include "main.h"

/**
 * print_line - C function to draw a straight line in the terminal
 *
 * @n: the number of times that will print the dash
 *
 * Return: the straight line in the terminal
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
			_putchar('_');

		_putchar('\n');
	}
	else
		_putchar('\n');
}
