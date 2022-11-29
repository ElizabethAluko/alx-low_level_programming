#include "main.h"

/**
 * *get_nodeint_at_index - returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the list.
 * @index: index of the node.
 * Return: returns the nth node of a listint_t linked list.
 * if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i <= index)
	{
		ptr = head;
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (ptr);
}

