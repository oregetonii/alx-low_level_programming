#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i; 

	va_list nums_print;
	va_start(nums_print, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d ", va_args(nums_print, int));
		printf("%d%s ", va_args(nums_print),*separator);
	}
	printf("\n");
}
