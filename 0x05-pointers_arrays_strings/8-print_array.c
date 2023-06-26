#include "main.h"

/**
 * print_array - prints n elements of integer array
 * @*a: pointer to the array
 * @n: numberof elements to print
 * Return: 0
 */

void print_array(int *a, int n)
{
	int array[];
	int *p = &array[];
	
	int x = p + n;
	while (p <= x)
	{
		_putchar((char) *p);
		_putchar(',');
		_putchar(' ');		
	}

	_putchar('\n');

	return (0);
}
