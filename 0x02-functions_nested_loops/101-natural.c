#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that computes and prints the sum of
 *			all multiples of 3 or 5
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, a;

	a = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			a = a + i;
		}
	}

	printf("%d\n", a);

	return (0);
}
