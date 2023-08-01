#include "lists.h"

/**
 * sum_listint - computes sum of list items
 * @head: pointer to a list
 * Return: sum (int)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

