#include "main.h"

/**
 * more_numbers - prints numbers from (0 to 14)x10
 * Return: void function
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i++ < 10)
	{
		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j++ % 10);
		}
		j = 0;
		_putchar(10);
	}
}
