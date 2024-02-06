#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete a node at index index
 *
 * @head: the head pointer of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful, -1 if faild
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
