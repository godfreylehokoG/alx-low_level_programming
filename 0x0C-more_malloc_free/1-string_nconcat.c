#include "main.h"

/**
 * _strlen - measures str length
 * @s: str to be measured
 * Return: str length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}

/**
 * string_nconcat - allocates memory
 * @n: int to allocate memory for
 * @s1: first str
 * @s2: seconf str
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *malloc_int;
	unsigned int i, len_s1 = _strlen(s1), len_s2 = _strlen(s2);

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;
	if (n >= len_s2)
		n = len_s2;
	else
	{
		malloc_int = malloc(len_s1 + n + 1);
	}
	if (malloc_int == 0)
		return (0);
	for (i = 0; i < len_s1 + n; i++)
	{
		if (i >= len_s1)
		{
			malloc_int[i] = s2[i - len_s1];
			continue;
		}
		malloc_int[i] = s1[i];
	}
	malloc_int[len_s1 + n] = '\0';
	return (malloc_int);
}
