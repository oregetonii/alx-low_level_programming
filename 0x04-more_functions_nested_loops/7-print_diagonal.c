#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int doo;
	int bar;

	if (n > 0)
	{
		for (doo = 1; doo <= n; doo++)
		{
			for (bar = 1; bar < doo; bar++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
