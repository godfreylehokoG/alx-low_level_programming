#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
