#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: node to be printed
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *nodes = h;
	int i = 0;

	while (nodes)
	{
		if (nodes->str == NULL)
		{
			printf("[0] (nil)\n");
			nodes = nodes->next;
		}
		else
		{
			printf("[%u] %s\n", nodes->len, nodes->str);
			nodes = nodes->next;
		}
		i++;
	}
	return (i);
}
