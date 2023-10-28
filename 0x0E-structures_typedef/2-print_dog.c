#include "dog.h"

/**
 * print_dog - C func that prints a struct dog
 *
 * @d: the pointer to the struct variables
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
