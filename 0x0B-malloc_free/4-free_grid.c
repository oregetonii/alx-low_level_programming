#include "main.h"
#include <stdlib.h>

/**
 * free-grid - frees mem allocated
 * for a 2D grid of ints
 * @grid: pointer to the array
 * @height: the height of the arrat
 * 
 * Return: Nothing
 */

int **alloc_grid(int width, int height);

void free_gri(int **grid, int height)
{
	int i;

	grid = alloc_grid(width, height);

	i = 0;
	while (i <= height)
		free(grid);
}

/**
 * alloc_grid - frees a 2D array of ints
 * @width: the array width
 * @height: the array height
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if ((width <= 0)||(height <= 0))
		return (NULL);

	for (i = 0; i <= height; i++)
		array = malloc(width * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
		for (j = 0; j <= width; j++)
			array[j] = 0;

	return (array);
}
