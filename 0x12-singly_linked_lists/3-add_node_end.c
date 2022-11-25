#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list.
 * @head: pointer to the pointer of the node.
 * @str: string
 *
 * Return: pointer to the new element or NULL if failed
 * string needs to be duplicated.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0, i = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		len = 0;
	else
	{
		while (str[i] != '\0')
		{
			len++;
			i++;
		}
	}
	last = *head;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
