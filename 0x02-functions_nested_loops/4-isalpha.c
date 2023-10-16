#include "main.h"

/**
 * _isalpha - C external function that checks the character if alphabet
 *
 * @c:  'C external function's parameter that defines the case of the letter'
 *
 * Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
