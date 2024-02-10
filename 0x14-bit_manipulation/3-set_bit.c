#include "main.h"
/**
 * set_bit - function to set the bit index to 1
 *
 * @n: the number to be changed at the index index
 * @index: the number of the bit to be set to 1
 *
 * Return: the value of the number after the change
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int max_at_index = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
		max_at_index *= 2;

	if ((*n | max_at_index) < 0 || index > 63)
	{
		return (-1);
	}
	else
		*n = (*n | max_at_index);

	return (1);
}
