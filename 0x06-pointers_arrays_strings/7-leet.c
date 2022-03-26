#include "main.h"

/**
 * leet - copies a string
 * @s: str to encode
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int j;
	char ch[] = {'A', '4', 'E', '3', 'O', '0', 'T', '7', 'L', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if (s[i] == ch[j] || s[i] == ch[j] + ' ')
			{
				s[i] = ch[j + 1];
			}
			j += 2;
		}
		i++;
	}

	return (s);
}
