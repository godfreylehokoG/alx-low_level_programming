#include "function_pointers.h"

/**
 *  array_iterator - function that passes a name to printer function
 * @array: the array to iterate through
 * @action: funcion pointer
 * @size: size of array
 * Return: void function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL && size > 0)
		for (i = 0; size > i; i++)
			action(array[i]);
}
