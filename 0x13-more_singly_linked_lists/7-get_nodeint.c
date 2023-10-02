#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index provided
 * @head: pointer to a list
 * @index: int position of note
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_position = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (node_position == index)
		{
			return (head);
		}
		head = head->next;
		node_position++;
	}
	return (NULL);
}

