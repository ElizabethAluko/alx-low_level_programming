#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list.
 * @head: pointer to the list pointer.
 * @index: position to delete node.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if ((*head) == NULL)
	{
		free(*head);
		return (1);
	}
	if (*head->next == NULL)
	{
		free(*head);
		return (1);
	}

	while (index != 1)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr->next == NULL)
	{
		ptr->prev = NULL;
		free(ptr);
		return (1);
	}
	else if (ptr->next != NULL)
	{
		ptr->prev = ptr->next;
		ptr->next->prev = ptr->prev;
		free (ptr);
		return (1);
	}
	else
		return (-1);
}
