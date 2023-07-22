#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of integer array
 * @a: pointer to the array
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int count = 1;

	while (count < n)
	{
		printf("%d%c%c", *a,',',' ');
		count++;
	}
	if (count == n)
		printf("%d\n", *a);
}
