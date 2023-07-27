#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: the buffer
 * @src: the original string
 * @n: bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
