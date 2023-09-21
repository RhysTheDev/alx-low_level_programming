#include "lists.h"

/**
 * add_node - adds new node at the start of a linked list
 * @head: double pointer to list
 * @str: new string to add
 *
 * Return: the address of the new element; NULL if fails
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *_newnode;

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
	_newnode->next = *head;
	*head = _newnode;

	return (_newnode);
}
