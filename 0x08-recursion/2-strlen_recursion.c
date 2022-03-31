#include "main.h"

/**
 * _strlen_recursion - a function to measure a str
 * @s: str to measure
 * Return: str length
 */

int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

