#include "main.h"

/**
 * puts2 - prints every other character of a string to the stdio followed by new line
 * @*s: pointer to the address of the string
 * Retuor: 0
 */

void puts2(char *str)
{
        char c;
        char *s = &c;

        while (*s != '\0')
        {
                _putchar(*s);
                s++;
		s++;
        }
        _putchar('\n');

        return (0);
}
