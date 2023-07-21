#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * reset_to_98 - takes a pointer to an int
 * updates the value it poit to to 98
 * Return: 0
 */

void reset_to_98(int *n);

/**
 * swap_int- swaps two integers
 * @*a and *b: pointer to the integers to swap
 * Return: 0
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @*s: pointer to the string wose length is returned
 * Return: 0
 */

int _strlen(char *s);

/**
 * _puts - prints a string to the stdio followed by new line
 * @*s: pointer to the address of the string
 * Retuor: 0
 */

void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */

void print_rev(char *s);

/**
 * puts2 - prints every other character of a string to the stdio followed by new line
 * @*s: pointer to the address of the string
 * Retuor: 0
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string
 * @*str: the pointer to the string to print
 * Return: 0
 */

void puts_half(char *str);

/**
 * print_array - prints n elements of integer array
 * @*a: pointer to the array
 * @n: numberof elements to print
 * Return: 0
 */

void print_array(int *a, int n);

/**
 *_strcpy - copies a string
 *@src: the source of the string
 *@dest: the destination of the string
 *Return: 0
 */

char *_strcpy(char *dest, char *src);

#endif
