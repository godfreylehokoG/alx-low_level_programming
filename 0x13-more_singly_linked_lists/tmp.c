#include "lists.h"

/**
 * sum_listint - frees a list
 * @head: list to be freed
 *
 * Return: void function
 */

int insert_nodeint_at_index(listint_t *head)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
