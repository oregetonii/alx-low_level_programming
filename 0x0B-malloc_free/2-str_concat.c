#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1 - first string
 * @s2 - the second string
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str = malloc(sizeof(char) * (_strlen(*s1) + _strlen(*s2)));
	_strdup(*s1);
	_strdup(*s2);

	return (str);
}

