#include "main.h"

/**
 * print_alphabet_x10 - C external function
 *
 * Description: 'C external function that print the alphabets 10 times'
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}

}
