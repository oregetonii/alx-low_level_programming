#include "variadic_functions.h"

/**
 * print_all - prints a str according to specified format
 * @format: format specifier str
 *
 * Return: nothing
 */

void print_all(const char* const format, ...)
{
	int i;
	int j;
	int k;
	va_list form_str;

	va_start(form_str, format);
	i = 0;
	j = 0;
	while (format[i] != '\0')
	{

		switch (format[i])
		{
			case 'c':
				j++;
				break;

			case 'i':
				j++;
				break;

			case 'f':
				j++;
				break;

			case 's':
				j++;
				break;

			default:
				j++;
				break;
		}
		i++;
	}


	k = 1;
	i = 0;
	while (k < j)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(form_str, int));
				break;
				
			case 'i':
				printf("%d, ", va_arg(form_str, int));
				break;

			case 'f':
				printf("%f, ", va_arg(form_str, double));
				break;

			case 's':
				if (format == NULL)
					printf("(nil), ");

				printf("%s, ", va_arg(form_str, char*));
				break;

			default:
				break;
		}
		k++;
		i++;
	}

	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(form_str, int));
			break;

		case 'i':
			printf("%d", va_arg(form_str, int));
			break;

		case 's':
			if (format == NULL)
				printf("(nil)");

			printf("%s", va_arg(form_str, char*));
			break;

		case 'f':
			printf("%f", va_arg(form_str, double));
			break;
	}

	va_end(form_str);
	printf("\n");
}
