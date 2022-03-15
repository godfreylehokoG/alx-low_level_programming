#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
