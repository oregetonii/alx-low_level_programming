#include "main.h"

/**
 * _puts - prints a string to the stdio followed by new line
 * @str: pointer to the address of the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
