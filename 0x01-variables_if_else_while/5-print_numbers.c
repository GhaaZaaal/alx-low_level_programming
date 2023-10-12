#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints the numbers from 0 to 9'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char n = '\n';

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(n);

	return (0);
}
