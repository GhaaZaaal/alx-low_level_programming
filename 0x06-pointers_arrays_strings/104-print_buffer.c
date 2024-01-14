#include "main.h"

/**
 * ASCII - C func that checks for ascii
 *
 * @n: the char to be tested
 *
 * Return: the result of printing
*/

int ASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * hex - C func that checks for hex
 *
 * @b: the pointer to the content
 * @first: the first int ascii
 * @last: the last int ascii
 *
 * Return: the result of printing
*/

void hex(char *b, int first, int last)
{
	int x = 0;

	while (x < 10)
	{
		if (x < last)
			printf("%02x", *(b + first + x));
		else
			printf("  ");
		if (x % 2)
			printf(" ");
		x++;
	}
}

/**
 * ASCIIprint - C func that prints the ascii
 *
 * @b: the pointer to the content
 * @first: the first int ascii
 * @last: the last int ascii
 *
 * Return: the result of printing
*/

void ASCIIprint(char *b, int first, int last)
{
	int x, y = 0;

	while (y < last)
	{
		x = *(b + y + first);

		if (!ASCII(x))
			x = 46;
		printf("%c", x);
		y++;
	}
}
/**
 * print_buffer - C func that prints a buffer
 *
 * @b: the pointer to the content
 * @size: the size in bytes
 *
 * Return: the result of printing
*/

void print_buffer(char *b, int size)
{
	int first, last;

	if (size > 0)
	{
		for (first = 0; first < size; first += 10)
		{
			last = (size - first < 10) ? size - first : 10;
			printf("%08x: ", first);
			hex(b, first, last);
			ASCIIprint(b, first, last);
			printf("\n");
		}
	}
	else
		printf("\n");
}
