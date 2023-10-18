#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: str to print between numbers
 * @n: num of ints passed to the func
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i; 

	va_list nums_print;
	va_start(nums_print, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(nums_print, int));
		printf("%d%s", va_arg(nums_print, int), separator);
	}
	printf("%d", va_arg(nums_print, int));
	va_end(nums_print);
	printf("\n");
}
