#include <stdlib.h>
#include "main.h"

/**
 * _realloc - allocate memory and set all values to zero
 * @ptr: pointer to the prev mem
 * @old_size: size prev mem
 * @new_size: size new mem
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL) 
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size) /* return ptr if reallocating same old size */
		return (ptr);

	if (ptr == NULL) /* malloc new size for null ptr */
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size); /* malloc and error check */
	if (p == NULL)
		return (NULL);

	/* filling up values */
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr); 

	return (p);
}
