#include "main.h"
/**
 * clear_bit - function to make the bit at index index zero
 *
 * @n: the number to check the bit at index index
 * @index: the index of the bit to check
 *
 * Return: 1 if it succeeded, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int max_at_index = 1, x;
	unsigned long int i;

	for (i = 0; i < index; i++)
		max_at_index *= 2;

	if (index > 63 || (*n & max_at_index) < 0)
	{
		return (-1);
	}
	if (((*n & max_at_index) == max_at_index) && *n >= max_at_index)
	{
		*n -= max_at_index;
	}

	return (1);
}
