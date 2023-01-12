#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the list pointer.
 * @n: data to be inserted.
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}


	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;

	return (new);
}
