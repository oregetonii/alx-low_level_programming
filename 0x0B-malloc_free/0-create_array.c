#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the specified char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	array[i] = '\0';
	return (array);
}
