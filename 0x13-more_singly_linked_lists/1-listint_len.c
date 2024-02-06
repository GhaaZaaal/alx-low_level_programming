#include "lists.h"
/**
 * listint_len - function to count the number of elements in a list
 *
 * @h: a constant pointer to the first element of the list
 *
 * Return: the count number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
	{
		return (count);
	}
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
