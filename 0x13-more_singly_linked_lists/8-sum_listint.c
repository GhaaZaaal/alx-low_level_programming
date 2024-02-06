#include "lists.h"
/**
 * sum_listint - function that sums the n elements of a list
 *
 * @head: the head pointer of the list
 *
 * Return: the sum of the n elements of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
