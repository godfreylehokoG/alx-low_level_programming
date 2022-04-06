#include "main.h"
#include <string.h>

/**
 * str_concat - check the code
 * @s1: str to store and print
 * @s2: str to store and print
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = strlen(s1), j = strlen(s2);
	int res = i + j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	new_str = malloc(res + 1);
	if (new_str == NULL)
		return (NULL);
	res = i;
	while (res >= 0)
	{
		new_str[res] = s1[res];
		res--;
	}
	res = j;
	while (res >= 0)
	{
		new_str[i + res] = s2[res];
		res--;
	}
	return (new_str);
}
