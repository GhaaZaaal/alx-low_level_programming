#include "main.h"

/**
 * array_range - C func that creates an array of int
 *
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: the array
*/

int *array_range(int min, int max)
{
	int *a;
	int i, x;

	if (min > max)
		return (NULL);

	x = max - min + 1;

	a = malloc(sizeof(int) * x);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		a[i] = min++;

	return (a);
}
