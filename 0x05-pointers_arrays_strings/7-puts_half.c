#include "main.h"

/**
 * puts_half of a string
 * @str: the string to print
 * Return: void
 */
int _strlen(char *str);

void puts_half(char *str)
{
	int x = _strlen(str);

	if ((x % 2) == 0)
	{
		for (str =  str + (x / 2); *str != '\0'; str++)
		
			_putchar(*str);

		_putchar('\n');
	}
	else
	{
		for (str = str + (x - ((x - 1) /2)); *str != '\0'; str++)

			_putchar(*str);

		_putchar('\n');
	}
}

/**
 * _strlen - takes a pointer to char and returns length
 * @s: pointer to string
 * Return: count
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
