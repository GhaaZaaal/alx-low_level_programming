#include "main.h"

/**
 * _abs - C external function that computes the absolute value of an int
 *
 * @n: 'an int number to compute the absolute value'
 *
 * Return: the absolute value of the integer
*/

int _abs(int n)
{

	if (n < 0)
		n = -n;

	return (n);
}
