#include "main.h"

/**
 * islower - checks for a lowercase character
 * Return: 1 (true), 0 (false)
 */

int _islower(int c)
{
	char alf;
	alf = (char) c;

	if ((alf >= 'a') && (alf <= 'z'))

		return (1);

	else

		return (0);
	_putchar('\n');
}
