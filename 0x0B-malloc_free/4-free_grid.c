#include "main.h"

/**
 * free_grid - C func that frees a 2 dimen grid previouly created
 *
 * @grid: the previously 2 dimen grid
 * @height: the height int
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
