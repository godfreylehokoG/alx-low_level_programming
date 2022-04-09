#include "main.h"

/**
 * realloc - allocates memory
 * @old_size: int to allocate memory for
 * @ptr:
 * @new_size:
 * Return: pointer to the allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *malloc_char, *str1 = ptr;
	unsigned int i, max = new_size;

	if (ptr == NULL)
	{
		malloc_char = malloc(new_size);
		return (malloc_char);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	malloc_char = malloc(new_size);
	if (malloc_char == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		malloc_char[i] = str1[i];
	free(ptr);

	return (malloc_char);
}
