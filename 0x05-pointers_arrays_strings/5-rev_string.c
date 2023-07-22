#include "main.h"

/**
 * rev_string - reveres a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	char c;
	char *send;
	int cn = _strlen(s);
	int aclen = cn - 1;
	send = s + aclen;

	if ((aclen % 2) == 0)
	{
		while ((send - s) > 1)
		{
			c = *s;
			*s = *send;
			send = &c;
			send--;
			s++;
		}
	}
	else
	{
		while (s != send)
		{
			c = *s;
			*s = *send;
			send = &c;
			send--;
			s++;
		}
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
