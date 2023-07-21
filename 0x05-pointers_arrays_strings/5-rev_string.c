#include "main.h"

/**
 * rev_string - reveres a string
 * @s: the string
 * Return: void
 */

int _strlen(char *s);

void rev_string(char *s)
{
	int i;
	char *temp;
	int cn = _strlen(s);

	for (i = 0; i <= (cn - 1); i++)
	{
		temp = &s[i];
		*temp = s[i];
		s[i] = s[((cn - 1) - i)];
		s[((cn - 1) - i)] = *temp;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is returned
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
