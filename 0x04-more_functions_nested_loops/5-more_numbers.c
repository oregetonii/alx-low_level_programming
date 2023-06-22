#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten cycles
 */

void more_numbers(void)
{
	char num;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 > 0)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
