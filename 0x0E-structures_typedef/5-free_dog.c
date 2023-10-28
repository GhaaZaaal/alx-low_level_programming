#include "dog.h"

/***/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->owner);
	free(d->name);
	free(d);
}
