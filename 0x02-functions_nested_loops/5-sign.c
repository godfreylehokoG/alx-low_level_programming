#include "main.h"

/**
 * print_sign - check the code
 * @n:
 *
 * Return: 1 if n is positive 0 if n is 0 and -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
