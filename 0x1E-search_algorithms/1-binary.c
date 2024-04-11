#include "search_algos.h"

/**
 * binary_search - searches for value in array using binary searh algorithm
 * @array: the array to search
 * @size: size of array
 * @value: the target
 *
 * Return: index of value, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l;
	size_t r;
	size_t m;
	size_t i;

	l = 0;
	r = size;
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size - 1; i++)
		printf("Searching in array: %d, ", array[i]);
	printf("%d\n", array[size - 1]);

	while (l != r)
	{
		m = ceil((l + r) / 2);
		if (array[m - 1] > value)
		{
			r = m - 1;
			for (i = 0; i < r - 1; i++)
				printf("Searching in array: %d, ", array[i]);
			printf("%d\n", array[r]);
		}
		else
		{
			l = m;
			for (i = l; i < size - 1; i++)
				printf("Searching in array: %d, ", array[i]);
			printf("%d\n", array[size - 1]);
		}
	}
	printf("Searching in array: %d\n", array[l]);
	if (array[l] == value)
		return (l);
	return (-1);
}
