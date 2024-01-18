#include "main.h"

/**
 * _realloc - C func that reallocates a memory block using mallic and free
 *
 * @ptr: pointer to the memory perviously allocated with a call to malloc
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size:the new size in bytes of the memory block
 *
 * Return: if new = old > ptr , if ptr = null > s , if s null > null and more
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	char *ptr2, *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);

		return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = ptr;
	s = malloc(sizeof(*ptr2) * new_size);

	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}

	tmp = s;

	for (i = 0; i < old_size && i < new_size; i++)
		tmp[i] = *ptr2++;

	free(ptr);
	return (s);
}
