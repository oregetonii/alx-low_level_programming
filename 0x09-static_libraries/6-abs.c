#include "main.h"

/**
 * _abs - returns the absolute value of int
 * @d: the int
 * Return: abolute value of d
 */
int _abs(int d)
{
	if (d < 0)
		d = 0 - d;
	else if (d == 0)
		d = 0;
	else
		d = d;
	return (d);
	_putchar('\n');
}
