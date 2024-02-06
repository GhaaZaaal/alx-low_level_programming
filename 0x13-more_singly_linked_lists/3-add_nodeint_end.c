#include "lists.h"
/**
 * add_nodeint_end - function for adding a new node to the end of the list
 *
 * @head: the head of the list pointed to the first element
 * @n: the value of the n element to be added
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
