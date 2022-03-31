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
		_strlen_recursion(++s);
		return (i);
	}
	return (i);
}

