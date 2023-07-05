#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: int length
 */

int _strlen_recursion(char *s)
{
	int inc0 = 0;
	int inc1 = 0;
	int hold;
	if (*s == '\0')
	{
            inc0 = 0;
	}
	else
	{
		s++;
		inc1++;
		hold = inc1;

		_strlen_recursion(s);
	}

	if (hold > inc0)
		return (hold);
	else
		return (inc0);
}
