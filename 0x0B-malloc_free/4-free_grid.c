#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - print name of file
 * @grid: matrix
 * @height: columns
 *
 * Description: concatenate two strings
 * Return: a pointer to the concatenate string
 */
void free_grid(int **grid, int height)
{
	int clear;

	clear = 0;
	while (clear < height)
	{
		free(grid[clear]);
		clear++;
	}
	free(grid);
}
