#include "main.h"
/**
 * rev_str - reverses a string followed by a newline
 * @s: string to reverse
 * Return: void function
 */
void rev_string(char *s)
{
	int i = 0;
	int end = 0;
	int start = 0;
	char str[1000];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	end = i - 1;
	for (start = 0; end < i; start++)
	{
		s[start] = str[end--];
	}
	str[start] = '\0';
}
