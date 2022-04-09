#include "main.h"

/**
 * array_range - allocates memory
 * @min: int to allocate memory for
 * @max:
 * Return: pointer to the allocated memory.
 */

int *array_range(int min, int max)
{
	int *malloc_int;
	unsigned int i, len = max - min;

	if (min > max)
		return (NULL);

	malloc_int = malloc(sizeof(int) * len + 1);

	if (malloc_int == NULL)
		return (NULL);

	for (i = 0; i <= len; i++, min++)
		malloc_int[i] = min;

	return (malloc_int);
}
