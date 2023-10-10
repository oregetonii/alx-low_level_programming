#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int i;

	va_list nums_add;
	va_start(nums_add, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_args(nums_add, int);

	return (sum);
}
