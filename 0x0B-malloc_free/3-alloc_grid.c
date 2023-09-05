#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- pointer to 2d array of int.
 * @width: width of array
 * @height: height of array
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = (int **)malloc(sizeof(int *) * width);
	if ((width || height) <= 0)
	{
	return (NULL);
	}

	if (grid == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < width;  i++)
	{
	grid[i] = (int *)malloc(height * sizeof(int));
	}

	if (grid == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(grid);
	return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}

