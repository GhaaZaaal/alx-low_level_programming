#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints the hexadecimal numbers from 0 to F'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, y;

	for (n = 0; n < 9; n++)
	{
		for (y = n + 1; y < 10; y++)
		{
			putchar('0' + n);
			putchar('0' + y);
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
