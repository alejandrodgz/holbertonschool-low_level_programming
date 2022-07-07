#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * free_grid - concatenates n bytes from src to dest
 * @grid: s1
 * @height: s2
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
