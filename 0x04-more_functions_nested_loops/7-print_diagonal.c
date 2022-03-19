#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: size of line
 * Return: void function
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (n > 0)
		while (i < n)
		{
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			j = 0;
			_putchar(92);
			_putchar(10);
			++i;
		}
	else
		_putchar(10);
}
