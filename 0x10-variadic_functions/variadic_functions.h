#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the param count
 *
 * Return: the int sum
 */

int sum_them_all(const unsigned int n, ...);


/**
 * print_numbers - prints numbers, followed by new line
 * @separator: str to print between numbers
 * @n: num of ints passed to the func
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints srings and new line
 * @separator: separates strings
 * @n: num of strs passed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints a str according to specified format
 * @format: format specifier str
 *
 * Return: nothing
 */

void print_all(const char* const format, ...);

#endif
