#include "lists.h"

/**
 * free_listint_safe - frees a loop
 * @h: list to be free
 *
 * Return: reversed int.
 */

size_t free_listint_safe(listint_t **h)
{
	free(h++);
	return (0);
}
