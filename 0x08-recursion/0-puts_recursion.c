#include "main.h"

/**
 * _puts_recursion - copies a string
 * @s: str to factorize
 * Return: void function
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}
/*	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
	{
		_putchar(s[i] * _puts_recursion(s[i + 1]));
	}
*/	_putchar(10);
}
