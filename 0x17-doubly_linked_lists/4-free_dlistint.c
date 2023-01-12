#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t lis
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;

	}
}
