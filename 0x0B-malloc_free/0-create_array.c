#include "main.h"

/**
 * create_array - C func that creates an array of chars and initializes it
 *			with a specific char
 * @size: the size of the array of chars
 * @c: the chars that will be initialized
 *
 * Return: the initialized char
*/

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (NULL);
	while (size--)
		i[size] = c;

	return (i);
}
