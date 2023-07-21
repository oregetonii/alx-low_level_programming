#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */

int _strlen(char *s);

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

void print_rev(char *s)
{
	int len;
	char *ss;
	len = _strlen(s);
	ss = s + len;

	while (ss > s)
	{
		_putchar(*ss);
		ss--;
	}
	_putchar('\n');
}
