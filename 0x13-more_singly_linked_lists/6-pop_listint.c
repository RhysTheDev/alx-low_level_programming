#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: pointer to the list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (*head == NULL || head == NULL)
		return (0);
	temp = (*head);
	node_data = temp->n;
	(*head) = temp->next;
	free(temp);
	return (node_data);
}

