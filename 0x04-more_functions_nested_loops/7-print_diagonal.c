#include "main.h"

/**
 * print_diagonal - C function to draw a straight line in the terminal
 *
 * @n: the number of times that will print the dash
 *
 * Return: the straight line in the terminal
*/
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');

			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
