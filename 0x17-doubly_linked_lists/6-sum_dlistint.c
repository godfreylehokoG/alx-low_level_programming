#include "lists.h"

/**
 * sum_dlistint - returns the sum the nodes in the list
 * @head: start of the list
 *
 * Return: sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int add_node = 0;

	while (head)
	{
		add_node += head->n;
		head = head->next;
	}
	return (add_node);
}
