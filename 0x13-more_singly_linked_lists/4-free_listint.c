#include "lists h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: point to the beginning of node.
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
