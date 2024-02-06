#include "lists.h"
/**
 * print_listint - print the nodes of integers in the list
 *
 * @h: a constant pointer to the first element list
 *
 * Return: the count number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
