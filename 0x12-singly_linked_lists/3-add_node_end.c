#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_newnode;
	list_t *current;

	if (str == NULL)
		return (NULL);

	_newnode = malloc(sizeof(list_t));
	if (_newnode == NULL)
		return (NULL);

	_newnode->str = strdup(str);
	if (_newnode->str == NULL)
	{
		free(_newnode);
		return (NULL);
	}

	_newnode->len = strlen(_newnode->str);
	_newnode->next = NULL;

	if (*head == NULL)
		*head = _newnode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = _newnode;
	}

	return (_newnode);
}

