#include "main.h"

/**
 * create_array - check the code
 * @size: size of array
 * @c: char to store and print
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *alpha;
	unsigned int i;

	if (size == 0 || c == NULL)
		return (NULL);
	alpha = malloc(sizeof(char) * size);
	for (i = 0; size > i; i++)
		*(alpha + i) = c;
	return (alpha);
}
