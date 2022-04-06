#include "main.h"
#include <string.h>

/**
 * free_grid - check the code
 * @grid: str to store and print
 * @height: str to store and print
 * Return: Void Function
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
