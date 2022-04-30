#include "main.h"

/**
 * flip_bits - flips one to another
 * @n: int to flip
 * @m: int to flip to
 *
 * Return: flipet bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_to_flip = 0;
	int i;

	for (i = 0; i < 64; i++)
	{
		if ((1 & n >> i) == (1 & m >> i))
			continue;
		bits_to_flip++;
	}
	return (bits_to_flip);
}
