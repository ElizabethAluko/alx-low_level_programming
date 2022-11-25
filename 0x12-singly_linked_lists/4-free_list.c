#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: points to the node of the list.
 *
 * Return: void if successful.
 */
void free_list(list_t *head)
{
	list_t *hold;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		hold = head;
		free(head->str);
		head = head->next;
		free(hold);
	}
}
