#include "main.h"

/**
 * swap_int - C function that swaps the values of two integer
 *
 * @a: the first integer to be swaped
 * @b: the second integer to be swaped
 *
 * Return: the values swaped
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
