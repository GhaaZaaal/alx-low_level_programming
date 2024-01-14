#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints 0 - 9 numbers using putchar'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);

	putchar('\n');

	return (0);
}
