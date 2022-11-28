#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the list pointer
 * @n: data of the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
