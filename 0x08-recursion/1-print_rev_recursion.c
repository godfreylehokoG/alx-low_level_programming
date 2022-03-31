#include "main.h"

/**
 * _print_rev_recursion - str to print in reverse
 * @s: str to factorize
 * Return: void function
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
