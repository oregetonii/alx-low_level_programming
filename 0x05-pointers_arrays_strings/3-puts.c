#include "main.h"

/**
 * _puts - prints a string to the stdio followed by new line
 * @*str: pointer to the address of the string
 * Return: 0
 */

void _puts(char *str)
{
	char c;

	str = &c;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
