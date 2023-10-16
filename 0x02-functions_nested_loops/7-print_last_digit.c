#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: 'C function that prints a last digit of a number'
 *
 * Return: i the last digit number
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
