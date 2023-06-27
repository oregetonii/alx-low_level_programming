#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the address of the string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
