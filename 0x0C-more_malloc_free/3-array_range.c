#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: lower array value
 * @max: upper array value
 *
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);

	ar[0] = min;
	for (i =1; i <= max; i++)
		ar[i] = min + 1;

	return (ar);
}
