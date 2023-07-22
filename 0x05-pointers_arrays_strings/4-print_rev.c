#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	int count = _strlen(s);
	char *ss;

	ss = s + (count - 1);

	while (s <= ss)
	{
		_putchar(*ss);
		ss--;
	}
	_putchar('\n');
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
