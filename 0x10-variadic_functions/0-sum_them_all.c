#include "variadic_functions.h"

/**
 * sum_them_all - C func that adds all the variable arguments
 *
 * @n: the number of arguments
 * @...: the integers to be added
 *
 * Return: the result of adding
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		x += va_arg(ap, int);
	va_end(ap);
	return (x);
}
