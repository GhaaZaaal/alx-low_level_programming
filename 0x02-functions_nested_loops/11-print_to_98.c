#include <stdio.h>

/**
 * print_to_98 - prints natural numbers till 98 if higher or lower
 *
 * @n: The number to begin counting at.
 *
 * Return: the nutral numbers
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);

		printf("%d\n", n);
	}
}
