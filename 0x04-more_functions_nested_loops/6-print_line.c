#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int k = n;

	for (k = n; k > 0; k--)
		_putchar('_');

	_putchar('\n');
}
