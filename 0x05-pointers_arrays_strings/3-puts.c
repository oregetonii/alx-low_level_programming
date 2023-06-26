#include "main.h"

/**
 * _puts - prints a string to the stdio followed by new line
 * @*s: pointer to the address of the string
 * Retuor: 0
 */

void _puts(char *str)
{
	char c;
	char *s = &c;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
