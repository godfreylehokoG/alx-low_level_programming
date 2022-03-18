#include "main.h"

/**
 * print_line - prints a line
 * @n: size of line
 * Return: void function
 */
void print_line(int n)
{
	if (n > 0)
		while (n-- > 0)
			_putchar('_');
	_putchar(10);
}
