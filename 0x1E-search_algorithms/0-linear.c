#include "search_algos.h"

/**
 * linear_search - Seaches for value in array of ints
 * using Linear search algorithm
 * @array: pointer to the array
 * @size: size of the array
 * @value: the target value
 *
 * Return: position of value if successful, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
