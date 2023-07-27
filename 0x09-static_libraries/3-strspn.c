#include "main.h"

/**
 * _strspn - returns length of string that matches values consecutively
 * @s: search string
 * @accept: search matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
       	int j;
	int mtch = 0;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				mtch++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (mtch);
		}
		i++;
	}
	return (mtch); 

}
