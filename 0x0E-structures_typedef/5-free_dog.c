#include "dog.h"

/**
 * free_dog - C func that free the mem of a struct
 *
 * @d: the pointer to the struct
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
