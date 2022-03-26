#include "main.h"

/**
 * string_toupper - copies a string
 * @s: str to convert toupper
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) > 96 && *(s + i) < 123)
			*(s + i) -= 97 - 65;
		i++;
	}
	return (s);
}
