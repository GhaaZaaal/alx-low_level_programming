#include "lists.h"
/**
 * pop_listint - function to delete the head of the list
 *
 * @head: the head pointer of the first element of the list
 *
 * Return: the head pointer value of the member n
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *ptr = *head;

	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (n);
}
