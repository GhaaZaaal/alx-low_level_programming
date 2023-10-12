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
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'F'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
