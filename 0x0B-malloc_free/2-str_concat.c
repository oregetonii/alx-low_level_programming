#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1 - first string
 * @s2 - the second string
 * Return: pointer to the concatenated string
 */

int _strlen(char *s);

char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int count;
	
	if (s1 == NULL)
		*s1 = '\0';

	if (s2 == NULL)
		*s2 = '\0';

	con_str = malloc((_strlen(s1) + _strlen(s2)) * sizeof (char));
	count = 0;
	for (; *s1 != '\0'; s1++)
	{
		*con_str = *s1;
		count++;
		con_str++;
	}
	for (; *s2 != '\0'; s2++)
	{
		*con_str = *s2;
		count++;
		con_str++;
	}
	*con_str = '\0';

	return (con_str - count);
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

