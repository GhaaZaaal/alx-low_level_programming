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
		putchar(c);
	}
	for (e = 'A'; e <= 'Z'; ++e)
	{
		putchar(e);
	}

	putchar(d);

	return (0);
}

