#include "main.h"
/**
 * get_bit - function to get the value of the bit at index index
 *
 * @n: the number to check the bit at index index
 * @index: the index of the bit to return its value
 *
 * Return: the value at index index of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if ((n >>= index) < 0 || index > 64)
	{
		return (-1);
	}
	if (n & 1)
	{
		return (1);
	}
	else
		return (0);
}
