#include "main.h"

/**
 * print_triangle - C function to draw a triangle in the terminal
 *
 * @size: the number of times that will print the hash
 *
 * Return: the triangle in the terminal
*/
void print_triangle(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (x = size - i; x > 0; x--)
				_putchar(' ');

			for (x = 0; x < i; x++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
