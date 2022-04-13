#include "function_pointers.h"

/**
 * print_name - function that passes a name to printer function
 * @name: the name to pass to function
 * @f: function pointer
 * Return: pointer to the allocated memory.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
