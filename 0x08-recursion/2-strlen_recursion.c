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

        if (*s == '\0')
        {
            inc0 = 0;
	}
	else
	{
		s++;
		inc1++;

		_strlen_recursion(s);
	}

	if (inc1 > inc0)
		return (inc1);
	else
		return (inc0);
}
