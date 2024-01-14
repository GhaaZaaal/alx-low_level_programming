#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program that gets the highest prime factor of a num
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long x = 612852475143, y;

	while (y < (x / 2))
	{
		if ((x % 2) == 0)
		{
			x = x / 2;
			continue;
		}

		for (y = 3; y < (x / 2); y = y + 2)
		{
			if ((x % y) == 0)
				x = x / y;
		}
	}

	printf("%ld\n", x);

	return (0);
}
