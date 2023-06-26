#include "main.h"

/**
 * puts_half - prints half of a string
 * @*str: the pointer to the string to print
 * Return: 0
 */

void puts_half(char *str)
{
	char s;
	char *p = &s;

	int x = _strlen(*p);

	if ((x % 2) == 0)
	{
		for (p = p + (x / 2); *p != '\0'; p++)
		
			_putchar(*p);

		_putchar('\n');
	}
	else
	{
		for (p = p + (x - ((x - 1) /2)); *p != '\0'; p++)

			_putchar(*P);

		_putchar('\n');
	}

	return (0);
}
