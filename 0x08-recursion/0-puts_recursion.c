#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
