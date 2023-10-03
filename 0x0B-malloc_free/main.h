#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is returned
 * Return: int value
 */

int _strlen(char *s);

/**
 * _puts - prints a string to the stdio followed by new line
 * @*s: pointer to the address of the string
 * Return: 0
 */

void _puts(char *str);

/**
 * _strcpy - copies a string
 * @src: the original string
 * @dest: the copied string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: the second string
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2);

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the specified char
 * Return: pointer to the array
 */ 

char *create_array(unsigned int size, char c);

/**
 * alloc-grid - creates a 2D array of ints
 * @width: the array width
 * @height: the array height
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height);

#endif
