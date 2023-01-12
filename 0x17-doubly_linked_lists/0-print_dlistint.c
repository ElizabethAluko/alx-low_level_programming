#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
	int count = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
		{
			printf("Empty list");
		}
		else
		{
			printf("%u\n", h->n);
			count++;
	printf("--> %d\n", count);
