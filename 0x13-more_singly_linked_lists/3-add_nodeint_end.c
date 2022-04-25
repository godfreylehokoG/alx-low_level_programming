#include "lists.h"

/**
 * add_nodeint_end - adds node to list
 * @head: head of node
 * @n: items to be added
 * Return: head of node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
		return (NULL);
	last_node->n = n;

	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
		return (*head);
	}
	new_node = *head;

	while (new_node->next != NULL)
		new_node = new_node->next;
	new_node->next = last_node;

	return (*head);
}
