#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: start oof list
 * @index: list index
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	dlistint_t *head_backup = *head;
	unsigned int node = 0;

	if (!h || (!h->next && h->n == 0 && !h->prev))
	{
		head = NULL;
		return (-1);
	}
	while (h)
	{
		if (node == index)
		{
			if (!h->prev)
			{
				if (h->next)
				{
					h->next->prev = NULL;
					*head = h->next;
				}
				free(h);
				return (1);
			}
			if (!h->next)
			{
				if (h->prev)
					h->prev->next = NULL;
				free(h);
				return (1);
			}
			h->next->prev = h->prev;
			h->prev->next = h->next;
			free(h);
			return (1);
		}
		node++;
		h = h->next;
	}
	*head = head_backup;
	return (-1);
}

