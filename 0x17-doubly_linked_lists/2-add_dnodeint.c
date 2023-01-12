#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointers of the head of the list.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	if (*head == NULL)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
