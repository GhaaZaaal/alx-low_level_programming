#include "main.h"
/**
 * get_endianness - function to determine the endianness of a system
 * Return: 0 if litle endian, 1 if big endian
 */
int get_endianness(void)
{
	union tester test;

	test.i = 1;
	if (test.c[0] != 1)
	{
		return (0);
	}

	return (1);
}
