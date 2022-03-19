#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void function
 */
void print_square(int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (size > 0)
		while (i < size)
		{
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			j = 0;
			_putchar(10);
			++i;
		}
	else
		_putchar(10);
}
