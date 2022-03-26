#include "main.h"

/**
 * reverse_array - copies a string
 * @a: first str to compare
 * @n: first str to compare
 * Return: difference between s1 and s2
 */

void reverse_array(int *a, int n)
{
	int i;
	int c[800000];

	i = 0;
	while (i < *(&c + 1) - c)
	{
		c[i] = 0;
		i++;
	}

	i = 0;
	while (i < n)
	{
		c[i] = a[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		a[i] = c[n - 1 - i];
		i++;
	}
}
