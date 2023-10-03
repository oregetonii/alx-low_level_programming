#include "main.h"
#include <stdlib.h>

/**
 * alloc-grid - creates a 2D array of ints
 * @width: the array width
 * @height: the array height
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
