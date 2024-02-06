#include "lists.h"
/**
 * free_listint2 - free a list using the address of the first element
 *
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tail = *head;

	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else if (*head != NULL)
	{
		while (tail != NULL)
		{
			tail = tail->next;
			free(*head);
			*head = tail;
		}
		*head = NULL;
	}
}
