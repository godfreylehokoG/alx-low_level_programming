#include "lists.h"

/**
 * add_node_end - adds a node at the end of list
 * @head: first element of the list
 * @str: str that will be the new node in the list
 *
 * Return: nodes of str
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
