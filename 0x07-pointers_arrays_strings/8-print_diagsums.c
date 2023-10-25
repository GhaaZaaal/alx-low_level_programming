#include "main.h"

/**
 * print_diagsums - C func that prints the sum of the two diaagonals
 *			of a square matrix of integers
 *
 * @a: array with two dimensions
 * @size: the size of square
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
