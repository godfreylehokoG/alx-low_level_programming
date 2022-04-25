#include "lists.h"

/**
 * pop_listint - adds node to list
 * @head: head of node
 * Return: head of node.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *next_node;

	if (!*head)
		return (0);

	n = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
	return (n);
}
