#include "main.h"

/**
 * _strlen - takes a pointer to char and returns length
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;
	char  c;
	s = &c;
	while (*s != '\0')
	{
		s++;
		count = count + 1;
	}
	return (count);
}
