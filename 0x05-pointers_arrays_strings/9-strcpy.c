#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: str to print
 * @src: size of string to print
 * Return: void function
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	i++;

	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
