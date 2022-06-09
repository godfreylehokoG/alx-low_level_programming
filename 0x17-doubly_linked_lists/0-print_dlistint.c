#include "lists.h"

/**
 * print_dlistint - prints all elements of the linked list @h
 * @h: head of the linked list
 *
 * Return: size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
