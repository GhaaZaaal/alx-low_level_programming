#include "lists.h"
/**
 * get_nodeint_at_index - function for getting the node int at index
 *
 * @head: the head pointer of the list
 * @index: the index of the node
 *
 * Return: the node int at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *ptr = head;

	if (ptr != NULL)
	{
		for (i = 0; i < index; i++)
		{
			ptr = ptr->next;
		}
	}
	return (ptr);
}
