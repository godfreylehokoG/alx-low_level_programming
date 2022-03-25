#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: first str to compare
 * @s2: first str to compare
 * Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
	{
		i++;
	}

	if (s1[i] != 0 && s2[i] != 0)
		return (s1[i] - s2[i]);

	return (0);
}
