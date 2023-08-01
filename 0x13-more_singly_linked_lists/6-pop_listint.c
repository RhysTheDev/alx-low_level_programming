#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *previous_node;

	if (head == NULL)
		return;

	while (*head)
	{
		previous_node = *head;
		*head = (*head)->next;
		free(previous_node);
	}
	free(*head);
	head = 0;
}

