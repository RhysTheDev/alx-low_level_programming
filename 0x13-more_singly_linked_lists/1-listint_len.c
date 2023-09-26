#include "lists.h"

/**
 * listint_len - computes length of the list
 * @h: list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int item_count = 0;


	temp = h;
	if (h == NULL)
	{
		return (0);
	}
	while (temp)
	{
		item_count++;
		temp = temp->next;
	}
	return (item_count);
}

