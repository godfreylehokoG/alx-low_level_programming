#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: index of the node starting from zero
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int node = 0;

	while (tmp)
	{
		if (index == node)
		{
			return (tmp);
		}
		node++;
		tmp = tmp->next;
	}
	return (NULL);
}
