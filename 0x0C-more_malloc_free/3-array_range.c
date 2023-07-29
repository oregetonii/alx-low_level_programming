#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: start 
 * @max: end 
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	/* malloc and error check */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	/* array values */
	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
