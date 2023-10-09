#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * using mallocOB
 * @b: the size of mem
 *
 * Return: pointer to the allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc_checked(sizeof *m * b);
	if (m == NULL)
		return (98);

	return (m);
}
