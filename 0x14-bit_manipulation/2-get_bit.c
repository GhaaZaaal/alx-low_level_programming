#include "main.h"
#include <limits.h>
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
	if (index > 63)
	{
		return (-1);
	}
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
		return (0);
}

int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	n = get_bit(2048, 1);
	printf("%d\n", n);
	n = get_bit(2048, 20);
	printf("%d\n", n);
	n = get_bit(ULONG_MAX, 19);
	printf("%d\n", n);

	n = get_bit(ULONG_MAX, 20000);
	printf("%d\n", n);
	n = get_bit(ULONG_MAX, 0);
	printf("%d\n", n);
	return (0);
}
