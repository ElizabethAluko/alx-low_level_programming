#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to the lists
 *
 * Return: number of the elements.
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
