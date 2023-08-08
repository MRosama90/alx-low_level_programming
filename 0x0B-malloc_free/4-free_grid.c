#include "main.h"
#include <stdlib.h>

/**
 * free_grid - asd
 * @grid: asda
 * @height: asd
 * Return: asd
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
