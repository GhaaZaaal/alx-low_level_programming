#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long f1num = 0, f2numb = 1, total;
	unsigned long f1numb051, f1num052, f2numb051, f2numb052;
	unsigned long h051, h052;

	for (i = 0; i < 92; i++)
	{
		total = f1num + f2numb;
		printf("%lu, ", total);

		f1num = f2numb;
		f2numb = total;
	}

	f1numb051 = f1num / 10000000000;
	f2numb051 = f2numb / 10000000000;
	f1num052 = f1num % 10000000000;
	f2numb052 = f2numb % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h051 = f1numb051 + f2numb051;
		h052 = f1num052 + f2numb052;
		if (f1num052 + f2numb052 > 9999999999)
		{
			h051 += 1;
			h052 %= 10000000000;
		}

		printf("%lu%lu", h051, h052);
		if (i != 98)
			printf(", ");

		f1numb051 = f2numb051;
		f1num052 = f2numb052;
		f2numb051 = h051;
		f2numb052 = h052;
	}
	printf("\n");
	return (0);
}
