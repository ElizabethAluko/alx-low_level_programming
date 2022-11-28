#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: point to the beginning of the node.
 * @n: data of the new node.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prt = malloc(sizeof(listint_t));
	listint_t *hold = *head;

	if (prt == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	while (hold->next != NULL)
		hold = hold->next;

	hold->next = ptr;

	return (*head);
}
