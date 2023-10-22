#include "main.h"

/**
 * _sqrt_recursion - C func that returns the natural square root of a number
 *
 * @n: the integer that will be square rooted
 * @val: the integer that will be checked to reach n
 *
 * Return: the value of the square root
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - C func that returns the natural square root of a number
 *
 * @n: the integer that will be square rooted
 * @val: the integer that will be checked to reach n
 *
 * Return: the integer of the value
*/

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
