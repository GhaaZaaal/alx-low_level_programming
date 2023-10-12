#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints the alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c, e, d;

	d = '\n';
	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar(d);

	return (0);
}
