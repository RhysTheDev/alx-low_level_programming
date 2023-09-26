#include "lists.h"

/**
 * print_listint - this prints elements of list h
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	temp = h;
	while (temp)
	{
		nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (nodes);
}

