#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Return: void function
 */
void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n != 50 && n != 52)
			_putchar(n);
		n++;
	}
	_putchar(10);
}
