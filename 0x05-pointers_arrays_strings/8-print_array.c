#include "main.h"

/**
 * print_array - C function that prints n elements of an array of int
 *
 * @a: the value of the pointer
 * @n: the value of the integer
 *
 * Return: the return ;)
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
