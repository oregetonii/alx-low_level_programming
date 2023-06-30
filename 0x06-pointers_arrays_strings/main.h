#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * *_strcat - concatenates two strings
 *@scr and dest: strings to concatenate
 * Return: dest
 */

char *_strcat(char *dest, char *src);

/**
 * *_strncat - concatenates two strings
 * @ *dest and *scr: pointers to strings
 * @n: bytes of scr to dest
 * Retur: dest
 */

char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - copies a string
 * @dest: destination buffer
 * @scr: the origin buffer
 * @n: bytes of scr
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @*s1 and s2: strings to compare
 * Return: -1(less), 0(match), 1 (greater)
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse arrray of integers
 * @*a: the array
 * @n: number of elements
 */

void reverse_array(int *a, int n);

/**
 * *string_toupper - converts lowecase to uppercase
 * @*: the string
 */

char *string_toupper(char *);

/**
 * *cap_string - capitalizes each word
 * @*: the string
 */

char *cap_string(char *);

/**
 * *leet - encodes a string to 1337
 * @*: string
 */

char *leet(char *);

#endif
