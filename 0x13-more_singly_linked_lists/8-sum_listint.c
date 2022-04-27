#include "lists.h"

/**
 * sum_listint - frees a list
 * @head: list to be freed
 *
 * Return: void function
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
