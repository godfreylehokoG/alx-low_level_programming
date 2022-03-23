#include "main.h"

/**
 * print_array - prints half a string followed by a newline
 * @a: str to print
 * @n: size of string to print
 * Return: void function
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == n)
		{
			printf("%d", a[i]);
			break;
			n--;
		}
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
