#include "lists.h"
/**
 * add_nodeint - function to add a node at the beginning of the list
 *
 * @head: the pointer of head of the list
 * @n: the number of the member n in the new node
 *
 * Return: the addres of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
