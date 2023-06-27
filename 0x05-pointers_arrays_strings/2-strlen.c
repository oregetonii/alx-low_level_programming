#include "main.h"

/**
 * _strlen - takes a pointer to char and returns length
 * @s: pointer to string
 * Return: count
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
