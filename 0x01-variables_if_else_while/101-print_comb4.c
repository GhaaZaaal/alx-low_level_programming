#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints three different digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, y, x;

	for (n = 0; n < 9; n++)
	{
		for (y = n + 1; y < 10; y++)
		{
			for (x = y + 1; x < 10; x++)
			{
				putchar('0' + n);
				putchar('0' + y);
				putchar('0' + x);
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
