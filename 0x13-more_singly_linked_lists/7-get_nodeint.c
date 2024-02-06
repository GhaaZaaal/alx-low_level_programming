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
	unsigned int i;
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

int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
