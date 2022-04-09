#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: int to allocate memory for
 * @size:
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *malloc_int;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	malloc_int = malloc(nmemb * size);
	if (malloc_int == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		malloc_int[i] = 0;
	return (malloc_int);
}
