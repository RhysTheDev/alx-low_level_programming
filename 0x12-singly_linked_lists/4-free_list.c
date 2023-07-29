#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nextemp;

	while (head)
	{
		nextemp = head->next;
		free(head->str);
		free(head);
		head = nextemp;
	}
}

