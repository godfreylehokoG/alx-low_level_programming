#include "main.h"

/**
 * _strncat - copies a string
 * @dest: dest str
 * @src: str to add to dest
 * @n: size of full string
 * Return: void function
 */

char *_strncat(char *dest, char *src, int n)
{
	int count_dest;
	int i;

	count_dest = 0;
	i = 0;
	while (dest[count_dest])
		count_dest++;
	while (i < n && src[i] != '\0')
	{
		dest[count_dest++] = src[i++];
	}
	return (dest);
}
