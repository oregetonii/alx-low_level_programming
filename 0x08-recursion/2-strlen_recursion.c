#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: int length
 */

int _strlen_recursion(char *s)
{
	int inc = 0;

        if (*s != '\0')
        {
                s++;
		inc++;

                _strlen_recursion(s);

		return (inc);
        }
        else
        {
                return (inc);
        }
}
