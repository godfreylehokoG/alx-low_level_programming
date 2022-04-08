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
	if (malloc_int == 0)
		exit(98);
	malloc_int[0] = b;
	return (malloc_int);
}
