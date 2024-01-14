#include "main.h"

/**
 * _pow_recursion - C fun that returns the value of x raised to the power of y
 *
 * @x: the integer that will be power by y
 * @y: the integer of the power value
 *
 * Return: the answer of the power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
