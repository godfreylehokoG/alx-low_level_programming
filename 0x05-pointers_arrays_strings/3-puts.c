#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 * Return: void fucntion
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar(10);
}
