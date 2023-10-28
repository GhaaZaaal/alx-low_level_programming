#include "dog.h"

/**
 * length - C func that returns the length of a string
 *
 * @s: the string to be lengthed
 *
 * Return: l
*/

int length(const char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}

/**
 * cpy - C func that copy the string to
 *
 * @to: the string will be copied here
 * @s: tha string to be copied
 *
 * Return: to
*/

char *cpy(char *to, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		to[i] = s[i];

	to[i] = '\0';

	return (to);
}

/**
 * new_dog - C func that creates a new dog info
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: the new info
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = cpy(dog->name, name);
	dog->age = age;
	dog->owner = cpy(dog->owner, owner);

	return (dog);

}
