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
	list_t *n_node;
	list_t *f_node;
	unsigned int len = 0;
	const char *strtemp;

	if (str == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	strtemp = str;
	while (strtemp[len])
	{
		len++;
	}
	n_node->len = len;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	f_node = *head;
	while (f_node->next)
	{
		f_node = f_node->next;
	}
	f_node->next = n_node;
	return (*head);
}

