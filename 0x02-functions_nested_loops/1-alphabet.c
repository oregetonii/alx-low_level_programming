#include "main.h"

/**
 *print_alphabet - prints lowercase alphabet
 *Return: 0
 */

void print_alphabet(void)
{
	char alf1;
	int alf = 97;

	while(alf <= 122)
	{
		alf1 = (char) alf;
		_putchar(alf1);
		alf++;
	}

	_putchar('\n');
}
