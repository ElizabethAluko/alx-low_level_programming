#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked
 * @h: pointer to node.
 *
 * Return: number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
