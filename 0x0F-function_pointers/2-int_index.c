#include "function_pointers.h"

/**
 * int_index - C func that searches for an integer
 *
 * @array: the pointer to the integer array
 * @size: the size of the array
 * @cmp: the pointer to the compare function
 *
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
