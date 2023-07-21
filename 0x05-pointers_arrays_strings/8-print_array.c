#include "main.h"

/**
 * print_array - prints n elements of integer array
 * @a: pointer to the array
 * @n: numberof elements to print
 */

void print_array(int *a, int n)
{	
	int x = a + n;
	while (a <= x)
	{
		_putchar((char) *a);
		_putchar(',');
		_putchar(' ');		
	}

	_putchar('\n');
}
