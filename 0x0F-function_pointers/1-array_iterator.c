#include "function_pointers.h"

/**
 * array_iterator - C func that executes a func given as a parameter on each
 *			element of an array
 *
 * @array: the pointer to the integer array
 * @size: the array size
 * @action: the pointer of the func action
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
