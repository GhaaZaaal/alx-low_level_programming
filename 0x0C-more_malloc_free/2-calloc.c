#include "main.h"

/**
 * _calloc - C func that allocates memory for a n array using malloc
 *
 * @nmemb: the number of members
 * @size: the bytes of each member
 *
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	x = m;

	for (i = 0; i < (size * nmemb); i++)
		x[i] = '\0';

	return (m);
}
