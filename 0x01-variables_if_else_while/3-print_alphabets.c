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
	char c, d;

	d = '\n';

	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar(d);

	return (0);
}
