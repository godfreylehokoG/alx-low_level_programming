#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: dest str
 * @src: str to add to dest
 * @n: size of full string
 * Return: void function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
