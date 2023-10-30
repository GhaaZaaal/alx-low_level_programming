#include "lists.h"

/**
 * free_list - C func that frees list_t
 *
 * @head: pointer to the list_t
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
