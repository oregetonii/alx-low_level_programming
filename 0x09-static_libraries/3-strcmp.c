#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int that tells the space count
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (*(s1 + count) == *(s2 + count) && *(s1 + count))
		count++;

	if (*(s2 + count))
		return (*(s1 + count) - *(s2 + count));
	else
		return (0);
}
