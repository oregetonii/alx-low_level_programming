#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int len;
	char *ss;
	len = _strlen(s);
	ss = s + len;

	while (ss >= s)
	{
		_putchar(*ss);
		ss--;
	}
	_putchar('\n');
}
