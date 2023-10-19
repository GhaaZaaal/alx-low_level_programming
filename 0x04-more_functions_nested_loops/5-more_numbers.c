#include "main.h"

/**
 * more_numbers - C func prints numbers from 0 to 14 , 10 times in extern
 *
 * Return: the 10 times table of 0 to 14
 */
void more_numbers(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
