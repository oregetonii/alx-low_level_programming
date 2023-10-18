#include "variadic_functions.h"

/**
 * print_strings - prints srings and new line
 * @separator: separates strings
 * @n: num of strs passed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list str_print;
	va_start(str_print, n);

	i = 1;
	while (i < n)
	{
		p = va_arg(str_print, char*);
		if (separator == NULL)
		{
			if (p == NULL)
			{
				printf("(nil)");
			}
			printf("%s", p);
		}

		if (p == NULL)
			printf("(nil)%s", separator);

		printf("%s%s", p, separator);
		i++;
	}
	printf("%s", va_arg(str_print, char*));
	va_end(str_print);
	printf("\n");
}
