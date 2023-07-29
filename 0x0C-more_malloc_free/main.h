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
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * _strlen - calculates and return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string);

/**
 * string_nconcat - concatenates s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocate memory and set all values to zero
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers
 * @min: start
 * @max: end
 * Return: pointer to array
 */

int *array_range(int min, int max);

/**
 * _realloc - allocate memory and set all values to zero
 * @ptr: pointer to the prev mem
 * @old_size: size prev mem
 * @new_size: size new mem
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
