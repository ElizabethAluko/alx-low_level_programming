#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: point to the beginning of node.
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	if (*head == NULL)
	{
		free(*head);
		head = NULL;
		return;
	}

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
	free(*head);
	head = NULL;
}
