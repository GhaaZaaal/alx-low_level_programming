#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints alphabets reversly'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
