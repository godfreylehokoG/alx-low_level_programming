#include "main.h"
#include <string.h>

/**
 * alloc_grid - check the code
 * @width: to store and print
 * @height: str to store and print
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **new_str, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	new_str = malloc(sizeof(int *) * height);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new_str[i] = malloc(sizeof(int) * width);
		if (new_str[i] == NULL)
		{
			while (--i > 0)
				free(new_str[i]);
			free(new_str);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			new_str[i][j] = 0;
	}
	return (new_str);
}
