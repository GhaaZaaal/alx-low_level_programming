#include "main.h"

/**
 * factorial - C func that returns the factorial of a given number
 *
 * @n: the integer that will be go through the factorial func
 *
 * Return: the integer factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
