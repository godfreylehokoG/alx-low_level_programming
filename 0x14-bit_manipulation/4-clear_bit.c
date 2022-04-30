#include "main.h"

/**
 * clear_bit - sets the value to 0
 * @n: int to clear
 * @index: starts from 0
 *
 * Return: 1 if worked -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
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

	*n &= ~(1UL << index);

	return (1);
}
