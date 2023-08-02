#include "function_pointers.h"
/**
 * print_name - prints name as is
 * @name: the name to print
 *
 * Return: Nothing
 */

void f(char *c)
{
	_putchar(*c);
}

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
