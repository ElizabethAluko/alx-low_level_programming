#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the list.
 * @idx: position to insert the node.
 * @n: new data to insert.
 * Return: the address of the new node if successful and
 * NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *ptr1, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if ((*h) == NULL && idx == 0)
	{
		*h = new
		return (new);
	}
	else if ((*h) == NULL)
		return (NULL);
	ptr = *h;

	if (ptr == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		if (ptr->next != NULL)
		{
			ptr = ptr->next;
			idx--;
		}
		else
			return (add_dnodeint_end(h, n));
	}

	ptr1 = ptr->next;
	new->next = ptr1;
	new->prev = ptr;
	ptr->next = new;
	ptr1->prev = new;

	return (new);
}
