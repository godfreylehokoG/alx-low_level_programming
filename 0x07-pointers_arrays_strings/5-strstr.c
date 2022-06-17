#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int needle_in_haystack = 0;

	for (i = 0; haystack[i] != 0; i++)
	{

		for (j = 0; needle[j] != 0; j++)
		{

			if (haystack[i + j] == needle[j] &&
					haystack[i + j] != 0 && needle[j] != 0)
			{
				needle_in_haystack = 1;
				continue;
			}

			needle_in_haystack = 0;
		}

		if (needle_in_haystack)
			return (&haystack[i]);
	}

	return (0);
}
