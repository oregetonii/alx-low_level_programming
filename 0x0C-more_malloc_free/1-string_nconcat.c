#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: bytes of the second string to concatenate
 *
 * Return: pointer to concat string
 */

int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (n < sizeof(*s2))
	{
		str = malloc(sizeof(char) * (_strlen(s1) + n + 1));

		if (str == NULL)
			return (NULL);

		while (*s1 != '\0')
		{
			*str = s1;
			str++;
			s1++;
		}
		
		while (_strlen(s2) < n)
		{
			*str = *s2;
			str++;
			s2++;
		}
		*str = '\0';

		return (str);
	}

	else
	{
		str = malloc(sizeof(char) * (_strlen(s1) + sizeof(*s2)));
		if (str == NULL)
			return (NULL);

		while (*s1 != '\0')
		{
			*str = *s1;
			str++;
			s1++;
		}

		while (*s2 != '\0')
		{
			*str = *s2;
			str++;
			s2++;
		}
		*str = *s2;

		return (str);
	}
}
