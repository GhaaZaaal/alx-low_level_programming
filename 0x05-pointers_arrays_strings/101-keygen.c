#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - C program generates random passwords
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	while (i <= 2645)
	{
		c = rand() % 128;
		i = i + c;
		putchar(c);
	}
	putchar(2772 - i);
	return (0);
}
