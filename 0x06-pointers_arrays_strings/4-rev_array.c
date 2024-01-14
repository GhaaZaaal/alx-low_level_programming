#include "main.h"

/**
 * reverse_array - C func that reverses the content of an array of integers
 *
 * @a: the first int
 * @n: the second int
 *
 * Return: the reversed content
*/

void reverse_array(int *a, int n)
{
	int x, y, temp;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}
