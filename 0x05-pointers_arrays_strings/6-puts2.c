#include "main.h"

/**
 * puts2 - C function that prints every other char of a string
 *		with a new line
 *
 * @str: the value of the string
 *
 * Return: the characters
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
