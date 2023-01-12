#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a list.
 * @head: pointer to the list.
 * Return: sum of data of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	sum += ptr->n;
	return (sum);
}
