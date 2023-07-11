#include <stdlib.h>

/**
 * free_grid - frees 2 dim array that
 * was previously created
 *
 * @grid: 2 dimensional grid
 * @height: grid height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
}
