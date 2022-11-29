#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to the list.
 * Return: sum of n.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		ptr = head;
		sum += ptr->n
		head = head->next;
		if (head->link == NULL)
		{
			return (sum);
			break;
		}
		else
			continue;
	}
	return (sum);
}

