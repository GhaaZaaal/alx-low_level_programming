#include "main.h"

/**
 * _isupper - C function that checks for the letter case (upper or not)
 *
 * @c: the character used to check in this func
 *
 * Return: 1 , 0 (upper , otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
