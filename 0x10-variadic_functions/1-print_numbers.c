#include "variadic_functions.h"

/**
 * print_numbers - C func that print numbers with separator in between
 *
 * @separator: the separator string used
 * @n: the number of arguments
 * @...: the integers that will be printed
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
