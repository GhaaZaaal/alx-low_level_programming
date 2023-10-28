#include "dog.h"

/**
 * init_dog - C func that intialize a variable of type struct dog
 *
 * @d: the pointer to the struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
