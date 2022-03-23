#include "main.h"

/**
 * _strlen - meassures the length of a string
 * @s: string to be measured
 * Return: string size of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
