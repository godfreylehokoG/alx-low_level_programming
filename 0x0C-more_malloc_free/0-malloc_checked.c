#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: int to allocate memory for
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *malloc_int;

	malloc_int = malloc(b);
	if (malloc_int == NULL)
		exit(98);
	return (malloc_int);
}
