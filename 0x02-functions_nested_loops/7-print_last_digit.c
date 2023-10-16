#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @int: 'C program that prints a last digit of a number'
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int)
{
	int i = n % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
