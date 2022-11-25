#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list.
 * @head: pointer to the pointer of the node.
 * @str: string
 *
 * Return: pointer to the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0, i = 0;

	list_t *new = (list_t *) malloc(sizeof(list_t));

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
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
