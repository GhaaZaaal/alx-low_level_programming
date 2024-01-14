#include "main.h"

/**
 * _islower - C external function to detect the lower case letter
 *
 * @c: 'C external function that checks the case of the letter if lower or not'
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
