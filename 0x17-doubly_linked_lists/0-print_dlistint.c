#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
	int count = 0;
	dlistint_t *ptr = h;

	if(h == NULL)
		printf("List is empty")
	while(ptr->next != NULL)
	{
		printf("%u\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	printf("--> %d elements");
