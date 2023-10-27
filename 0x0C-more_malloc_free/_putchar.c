#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints 'char c'
 *
 * @c: the char using in putchar
 *
 * Return: 1 (Success) , -1 on error.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
