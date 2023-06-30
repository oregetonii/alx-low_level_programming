#include "main.h"

/**
 * reverse_array - reverse arrray of integers
 * @*a: the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;
	for (i = 0; i == (n - 1); i++)
	{
		b = a[n-i];
		a[n-i] = a[i];
		a[i] = b;
	}
}
