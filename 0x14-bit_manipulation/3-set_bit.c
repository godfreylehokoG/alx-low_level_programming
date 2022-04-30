#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: int to set to 1
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long copy = *n;

	while (copy)
	{
		count++;
		copy >>= 1;
	}



	if (index > 24)
		return (-1);

	*n |= 1U << index;
	return (1);
}
