#include "main.h"

/**
 * malloc_checked - check the code
 * @b: char to store
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *malloc_int;

	malloc_int = malloc(b);
	if (malloc_int == NULL)
		exit(98);
	return (malloc_int);
}
