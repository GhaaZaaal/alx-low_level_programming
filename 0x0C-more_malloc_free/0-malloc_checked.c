#include "main.h"

/**
 * malloc_checked - C func that allocates memory using malloc
 *
 * @b: the int used
 *
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
