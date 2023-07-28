#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int j = 0;

	if (size <= 0) 
		return (NULL);
	arr = malloc(sizeof(char) * size); 
	if (arr == NULL) 
		return (NULL);
	while (j < (int)size) 
	{
		*(arr + j) = c;
		j++;
	}
	*(arr + j) = '\0';
	return (arr);
}
