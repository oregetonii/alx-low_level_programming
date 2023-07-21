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
	int cn = (_strlen(s) - 1);

	for (i = 0; i <= cn; i++)
	{
		if ((cn + 1) % 2 == 0)
		{
			if (cn != (i + 2))
			{
				temp = &s[i];
				*temp = s[i];
				s[i] = s[(cn - i)];
				s[(cn - i)] = *temp;
			}
		}
		else
		{
			if (cn != (cn - 1))
			{
				temp = &s[i];
				*temp = s[i];
				s[i] = s[(cn - 1)];
				s[(cn - 1)] = *temp;
			}
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
