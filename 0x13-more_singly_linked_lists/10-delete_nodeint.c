#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index provided
 * @head: pointer to the list
 * @index: index of node to delete
 * Return: 1 on success; -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *tempHead = *head;
	unsigned int node;

	if (tempHead == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempHead);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (tempHead->next == NULL)
			return (-1);

		tempHead = tempHead->next;
	}

	temp = tempHead->next;
	tempHead->next = temp->next;
	free(temp);
	return (1);
}

