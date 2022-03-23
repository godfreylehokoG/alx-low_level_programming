#include "main.h"

/**
 * reset_to_98 - resets the given number to 98
 * @n: char to check if is upper case
 * Return: void function
 */
void reset_to_98(int *n)
{
	int i;

	i = 98;
	*n = (*&i);
}
