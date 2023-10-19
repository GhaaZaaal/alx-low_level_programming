#include "main.h"

/**
 * print_number - C function that print an int usint putchar
 *
 * @n: this will be the int to print
 *
 * Return: the integer entered
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
