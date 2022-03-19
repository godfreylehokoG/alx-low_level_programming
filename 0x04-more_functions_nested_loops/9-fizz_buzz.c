#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void function
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("BUZZ");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}
