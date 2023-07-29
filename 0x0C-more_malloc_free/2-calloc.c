#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory and set all values to zero
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i; 

	if (nmemb <= 0 || size <= 0) 
		return (NULL);

	/* allocate mem and error check */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* set allocated mem values to zero */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0; 

	return (ptr);
}
