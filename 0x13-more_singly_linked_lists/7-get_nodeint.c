#include "lists.h"

/**
 * get_nodeint_at_index - frees a list
 * @head: list to be freed
 * @index:
 *
 * Return: void function
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (head)
		return (head);
	return (NULL);
}
