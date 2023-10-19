#include "main.h"

/**
 * puts_half - C func prints half of the string per line
 *
 * @str: the value of the string
 *
 * Return: the return
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i = i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
