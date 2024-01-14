#include "main.h"

/**
 * _isdigit - C function that checks if int c is a number
 *
 * @c: the character used to check in this func
 *
 * Return: 1 , 0 (upper , not upper)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
