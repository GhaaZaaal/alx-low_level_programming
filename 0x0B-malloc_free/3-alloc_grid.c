#include "main.h"

/**
 * alloc_grid - C func that returns a pointer to a 2 dimensional array of int
 *
 * @width: the width of the table (number of columns)
 * @height: the height of the table (number of rows)
 *
 * Return: the 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		if (grid[row] == NULL)
		{
			for (; row >= 0; row--)
				free(grid[row]);

			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
