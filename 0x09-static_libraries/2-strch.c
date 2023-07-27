#include "main.h"
#define NULL 0

/**
 * _strchr - locates first occurrence of char in string and returns pointer
 * @s: search string
 * @c: search character
 * Return: pointer to e occurance of char
 */

char *_strchr(char *s, char c)
{
	int first = 0;

	while (s[first] != '\0' && s[first] != c)
		first++;

	if (s[first] == c)
		return (&s[first]);
	else
		return (NULL);
}
