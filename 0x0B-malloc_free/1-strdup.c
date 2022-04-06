#include "main.h"
#include <string.h>

/**
 * _strdup - check the code
 * @str: char to store and print
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *new_str;
	int j, i = strlen(str);

	new_str = malloc(sizeof(*str) * i);
	if (new_str == NULL)
		return (NULL);
	for (j = 0; i > j; j++)
		*(new_str + j) = str[j];
	return (new_str);
}
