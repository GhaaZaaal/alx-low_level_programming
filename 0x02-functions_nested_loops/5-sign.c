#include "main.h"

/**
 * print_sign - C external function that prints the sign of the numb
 *
 * @n:  'C external function's parameter that defines the sign of the numb'
 *
 * Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if else(n == 0)
	{
		_putchar('0');
		return (0);
	}
	if else(n < 0)
	{
		_putchar('-');
		return (0);
	}
}
