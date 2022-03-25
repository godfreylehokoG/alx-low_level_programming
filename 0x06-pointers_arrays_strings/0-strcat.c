#include "main.h"

/**
 * _strcat - copies a string
 * @dest: str to print
 * @src: size of string to print
 * Return: void function
 */

char *_strcat(char *dest, char *src)
{
	int count_src;
	int count_dest;
	int i;

	count_src = 0;
	count_dest = 0;
	i = 0;
	while (src[count_src] && dest[count_dest])
	{
		count_src++;
		count_dest++;
	}
	while (i <= count_src)
	{
		dest[count_dest++] = src[i++];
	}
	dest[count_dest + 1] = '\0';
	return (dest);
}
