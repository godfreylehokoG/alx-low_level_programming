#include "main.h"

/**
 * reset_to_98 - returns the largest of 3 numbers
 * @*n: char to check if is upper case
 * Return: 1 if is upper case 0 if not
 */
void reset_to_98(int *n)
{
	int i;

	i = 98;
	*n = (* &i);
}
