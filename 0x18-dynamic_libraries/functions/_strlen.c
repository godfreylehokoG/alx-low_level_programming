#include "main.h"

/**
 * _strlen - man strlen
 * @c: man strlen
 *
 * Return: man strlen
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
