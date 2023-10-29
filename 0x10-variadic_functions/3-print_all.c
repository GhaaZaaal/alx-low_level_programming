#include "variadic_functions.h"

/**
 * forchar - C func to format a character
 *
 * @separator: the separator for the strings
 * @ap: the arguments
 *
 * Return: void
*/

void forchar(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * forint - C func to format an integer
 *
 * @separator: the separator for the strings
 * @ap: the arguments
 *
 * Return: void
*/

void forint(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * forfloat - C func to format a float integer
 *
 * @separator: the separator for the strings
 * @ap: the arguments
 *
 * Return: void
*/

void forfloat(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * forstring - C func to format a string
 *
 * @separator: the separator for the strings
 * @ap: the arguments
 *
 * Return: void
*/

void forstring(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";

		printf("%s%s", separator, s);
}

/**
 * print_all - C func that prints all the above
 *
 * @format: the format of the printed
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", forchar},
		{"i", forint},
		{"f", forfloat},
		{"s", forstring},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
