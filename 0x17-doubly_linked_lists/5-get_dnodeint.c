#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to list.
 * @index: node position to return.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
