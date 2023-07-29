#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the start of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
		h = h->next;
	}
	return (n);
}

