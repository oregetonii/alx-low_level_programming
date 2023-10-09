#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array
 * @nmemb: num of array elements
 * @size: size of array data type
 *
 * Return: pointer to the mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *car;

	if ((nmemb == 0)||(size == 0))
		return (NULL);

	car = malloc(size * nmemb);
	if (car == NULL)
		return (NULL);

	return (car);
}
