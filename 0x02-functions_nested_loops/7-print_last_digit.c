#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - check the code
 *@n:
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	n = _abs(n %= 10);
	_putchar(n + '0');
	return (n);
}
