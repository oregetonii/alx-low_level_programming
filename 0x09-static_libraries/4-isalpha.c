#include "main.h"
/**
 * _isalpha - checks whether or not a character is an alphabet
 * Return: 1 (true), 0 (false)
 */

int _isalpha(int c)
{
	char alf;
	alf = (char) c;

	if ((alf >= 'a') && (alf <= 'z'))

		return (1);

	else if ((alf >= 'A') && (alf <= 'Z'))

		return (1);

	else

		return(0);
	_putchar('\n');
	return (0);
}
