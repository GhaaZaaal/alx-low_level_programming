#include "main.h"

/**
 * _atoi - C function that convert a string to an int
 *
 * @s: the value of the string
 *
 * Return: i
*/
int _atoi(char *s)
{
	unsigned int i = 0;
	int x = 1;

	do {
		if (*s == '-')
			x = x * -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	} while (*s++);

	return (i * x);
}
