#include "main.h"
#include <string.h>

/**
 * free_grid - check the code
 * @ac: str to store and print
 * @av: str to store and print
 * Return: Void Function
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, k, n;

	if (ac == 0 || av == NULL)
		return (NULL);
	n = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}
	n++;

	new_str = malloc(sizeof(char) * n);
	if (new_str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k++] = av[i][j];
		}
		new_str[k++] = '\n';
	}
		new_str[k] = '\0';
			return (new_str);
}
