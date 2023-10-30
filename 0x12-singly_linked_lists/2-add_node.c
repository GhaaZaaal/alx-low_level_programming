#include "lists.h"

/**
 * add_node - C func that adds a new node at the beginning of a list_t
 *
 * @head: pointer to the head of the list
 * @str: pointer to the string to be added as a node to the list
 *
 * Return: the address of the new element or NULL if fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int l;
	char *str2;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	str2 = strdup(str);

	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = str2;
	new->len = l;
	new->next = *head;

	*head = new;

	return (new);
}
