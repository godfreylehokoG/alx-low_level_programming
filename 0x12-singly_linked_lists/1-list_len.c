#include "lists.h"

/**
 * list_len - list elements of in linked list
 * @h: node to be printed
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *nodes = h;
	size_t i = 0;

	while (nodes)
	{
		nodes = nodes->next;
		i++;
	}
	return (i);
}
