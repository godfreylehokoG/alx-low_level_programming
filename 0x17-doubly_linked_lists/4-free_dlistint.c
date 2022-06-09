#include "lists.h"
/**
 * free_dlistint - frees the linked list
 * @head: head of list to be freed
 *
 * Return: void function.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

