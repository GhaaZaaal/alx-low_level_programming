#include "main.h"

/**
 * print_sign - C external function that prints the sign of the numb
 *
 * @n:  'C external function's parameter that defines the sign of the numb'
 *
 * Return: 1 & -1 & 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
