#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * binary_to_uint - converts a bin num to uint
 * @b: the str of 1s and 0s
 *
 * Return: converted uint num
 */

unsigned int binary_to_uint(const char *b);

#endif
