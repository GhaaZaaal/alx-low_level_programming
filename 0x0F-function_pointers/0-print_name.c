#include "function_pointers.h"

/**
 * print_name - C func that prints a name
 *
 * @name: the string containing the name
 * @f: the function to print
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
