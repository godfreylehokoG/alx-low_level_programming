#include "main.h"

/**
 * _strlen_recursion - a function to measure a str
 * @s: str to measure
 * Return: str length
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (*s != 0)
	{
		i++;
		return (_strlen_recursion(++s));
	}
	return (i);
}

