#include "main.h"

/**
 * print_square - prints a square of #s given size
 * @size: size to draw
 */

void print_square(int size)
{
	int row, clm;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (clm = 1; clm <= size; clm++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
