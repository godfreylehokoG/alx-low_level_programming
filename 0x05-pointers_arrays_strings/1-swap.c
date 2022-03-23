#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first int to swap
 * @b: second int to swap
 * Return: void function
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = (*&temp);
}
