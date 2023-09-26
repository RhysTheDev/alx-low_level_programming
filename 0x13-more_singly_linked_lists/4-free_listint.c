#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *previous_node;

	while (head)
	{
		previous_node = head;
		head = head->next;
		free(previous_node);
	}
	free(head);
}


