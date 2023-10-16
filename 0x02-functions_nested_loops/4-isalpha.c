#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: 'C external function that defines the case of the letter'
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
