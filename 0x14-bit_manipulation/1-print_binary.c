#include "main.h"
/**
 * print_binary - Fucntion to print a decimal in binary without using / , %
 *
 * @n: the number to be converted
 */
void print_binary(unsigned long int n)
{
	int n_bits = 0, i, j, max_bits = 1;
	unsigned long int to_count_bits = n;

	if (n == 0)
	{
		putchar('0');
	}

	while (to_count_bits != 0)
	{
		to_count_bits >>= 1;
		n_bits++;
	}

	for (i = 1; i < n_bits; i++)
	{
		max_bits *= 2;
	}

	for (j = 0; j < n_bits; j++)
	{
		if (n & max_bits)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		max_bits >>= 1;
	}
}
