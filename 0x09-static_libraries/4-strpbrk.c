#include "main.h"
#define NULL 0

/**
 * _strpbrk - returns pointer to byte in s that matches a byte in accept
 * @s: search string
 * @accept: search matches
 * Return: pointer to first match
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL); 

}
