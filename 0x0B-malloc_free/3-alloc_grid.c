#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of int
 *
 * @width: the width
 * @height: the height
 *
 * Return: returns pointer to 2 dimensional
 * returns NULL if height & width is less than 1
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	}

	if (grid[0] == NULL)
	{
		for (i--; i >= 0; i--)
			free(grid[i]);
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[j][i] = 0;
	return (grid);
}
