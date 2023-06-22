#include "main.h"

/**
 * print_triangle - prints traingle with #s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int h;
	int l;
	int dgrm;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (l = 1; l <= (size - h); l++)
			_putchar(' ');

		for (dgrm = 1; dgrm <= h; dgrm++)
			_putchar('#');

		_putchar('\n');
	}
}
