#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @ *dest and *scr: pointers to strings
 * @n: bytes of scr to dest
 * Retur: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') 
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
