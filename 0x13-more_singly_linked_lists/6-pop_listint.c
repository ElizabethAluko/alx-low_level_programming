#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer of the pointer to the list.
 * Return: the head node’s data (n).
 * if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	*head = (*head)->next;
	i = ptr->n;
	free(ptr);
	ptr = NULL;

	return (i);
}
