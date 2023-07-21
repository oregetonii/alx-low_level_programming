#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int len;
	char *ss;

	len = _strlen(s);
	ss = s + (len - 1);

	while (ss >= s)
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