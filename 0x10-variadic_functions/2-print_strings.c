#include "variadic_functions.h"

/**
 * print_strings - C func that print strings with separator in between
 *
 * @separator: the separator string used
 * @n: the number of arguments
 * @...: the integers that will be printed
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
