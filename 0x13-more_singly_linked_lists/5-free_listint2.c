#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list to be freed
 *
 * Return: void function
 */

void free_listint2(listint_t **head)
{
	listint_t *nodes = *head;
	listint_t *next;

	while (nodes != NULL)
	{
		next = nodes->next;
		free(nodes);
		nodes = next;
	}
	*head = NULL;
}
