#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the param count
 *
 * Return: the int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list nums_add;
	
	va_start(nums_add, n);	
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums_add, int);

	va_end(nums_add);
	return (sum);
}
