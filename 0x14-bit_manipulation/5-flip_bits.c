#include "main.h"
/**
 * flip_bits - function to count the number of bits need to flip to switch
 *			between them
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the count of the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int y = m ^ n;

	while (y != 0)
	{
		if (y & 1)
		{
			count++;
		}
		y >>= 1;
	}

	return (count);
}
