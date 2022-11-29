#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: point to the start of the list.
 * @index: index of the node that should be delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *prst = *head;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(prst);
		return (1);
	}
	while (prst && i <= index)
	{
		if (i == index)
		{
			prev->next = prst->next;
			free(prst);
			return (1);
		}
		else
		{
			prev = prst;
			prst = prst->next;
		}
		i++;
	}
	return (-1);
}
