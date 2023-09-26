#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to the list
 * @n: int to be added
 * Return: address of the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}


