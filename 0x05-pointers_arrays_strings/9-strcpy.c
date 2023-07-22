#include "main.h"

/**
 *_strcpy - copies a string
 *@src: the source of the string
 *@dest: the destination of the string
 *Return: dest
 */ 

int _strlen(char *s);

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = _strlen(src);

	for (i = 0; i <= count + 1; i++)
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
