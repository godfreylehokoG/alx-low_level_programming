#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	c = 97;
	while (i < 10)
	{
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 97;
		i++;
	}

}
