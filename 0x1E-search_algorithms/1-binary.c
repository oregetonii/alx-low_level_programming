#include "search_algos.h"

/**
 * print_array - prints array whenever halved
 * @array: the array
 * @l: array left index
 * @r: array right index
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

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
	size_t l = 0;
	size_t r = size - 1;
	size_t m = 0;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
