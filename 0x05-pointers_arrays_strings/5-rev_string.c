#include "main.h"

/**
 * rev_string - reverses a string followed by a newline
 * @s: string to reverse
 * Return: void function
 */

void rev_string(char *s)
{
	int i;
	int j;
	char str[1000];

	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i--;
	
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
