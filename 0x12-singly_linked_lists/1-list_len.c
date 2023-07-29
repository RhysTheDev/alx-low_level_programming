#include "lists.h"

/**
* list_len - finds the number of elements in a linked list
* @h: pointer to the linked list
* Return: number of elements in the linked list h
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

