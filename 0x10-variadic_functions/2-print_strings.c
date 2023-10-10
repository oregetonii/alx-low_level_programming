#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list str_print;
	va_start(str_print, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%s ", va_arg(str_print, int));
		if (va_arg(str_print, int) == NULL)
			printf("(nil)");
		printf("%s%s ", va_arg(str_print, int), *separator);
	}
	printf("\n");
}
