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

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
