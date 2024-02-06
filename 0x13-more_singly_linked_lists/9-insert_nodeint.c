#include "lists.h"
/**
 * insert_nodeint_at_index - function for inserting a node at position index
 *
 * @head: the head pointer of the list
 * @idx: the index to insert the new node at
 * @n: the new node member n value
 *
 * Return: the address of the new node added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *ptr = *head;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		return (NULL);
	}
	
	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < idx; i++)
	{
		tmp = ptr;
		if (ptr->next == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
	}
	tmp->next = new;
	new->n = n;
	new->next = ptr;

	return (new);
}
