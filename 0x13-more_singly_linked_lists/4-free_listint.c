#include "lists.h"
/**
 * free_listint - function to free a list of its elements
 *
 * @head: the head of the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tail = head;

	while (tail != NULL)
	{
		tail = tail->next;
		free(head);
		head = tail;
	}
}
