#include "function_pointers.h"

/**
 * int_index - function that passes a name to printer function
 * @array: the array to iterate through
 * @cmp: funcion pointer
 * @size: size of array
 * Return: void function.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (cmp != NULL && array != NULL && size > 0)
	{
		while (size > i)
		{
			if (cmp(array[i++]))
				break;
		}
		if (size > i)
			return (i - 1);
	}
	return (-1);

}
