#include "main.h"

/**
 * print_square - C function to draw a square in the terminal
 *
 * @size: the number of times that will print the dash
 *
 * Return: the square in the terminal
*/
void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
