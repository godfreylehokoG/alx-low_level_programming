#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be freed
 *
 * Return: void function
 */

void free_list(list_t *head)
{
	list_t *nodes = head;
	list_t *next;

	while (nodes != NULL)
	{
		next = nodes->next;
		free(nodes->str);
		free(nodes);
		nodes = next;
	}
}
