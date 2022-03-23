#include "main.h"
/**
 * puts_half - prints half a string followed by a newline
 * @str: string to print
 * Return: void function
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i))
		i++;
	j = i / 2;

	while (i > j)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
