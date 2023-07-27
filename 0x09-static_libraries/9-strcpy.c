#include "main.h"

/**
 * _strcpy - copies a string
 * @src: the original string
 * @dest: the copied string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = _strlen(src);

	for (i = 0; i <= count; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: int value
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
