#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string in 
 * newly created mem space
 * @str - pointer to the input string
 * Return: pointer to the duplicated string
 */

int _strlen(char *s);

char *_strdup(char *str)
{
	char *p;
	int count = 0;

	if (str == NULL)
	  	return (NULL);

	p = malloc(_strlen(str) * sizeof(char));
	for (; *str != '\0'; str++)
		{
			*p = *str;
			count++;
			p++;
		}
	return (p - count);
}

/**
 *  * _strlen - takes a pointer to char and returns length
 *   * @s: pointer to string
 *    * Return: count
 *     */

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
