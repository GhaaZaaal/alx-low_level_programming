#include "lists.h"

/**
 * add_node_end - C func that adds a new node at the end of list_t
 *
 * @head: pointer to the head of the list_t
 * @str: pointer to the string that will added at the end
 *
 * Return: the address of the new element or NULL if fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	int l;
	char *str2;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	str2 = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = str2;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
