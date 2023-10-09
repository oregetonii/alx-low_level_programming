#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - allocates meme
 * using malloc
 * @b: the size of mem
 *
 * Return: pointer to the allocated mem
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: bytes of the second string to concatenate
 *
 * Return: pointer to concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates mem for an array
 * @nmemb: num of array elements
 * @size: size of array data type
 *
 * Return: pointer to the mem
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of ints
 * @min: lower array value
 * @max: upper array value
 *
 * Return: pointer to the created array
 */

int *array_range(int min, int max);

/**
 * _strlen - takes a pointer to char and returns length
 * @s: pointer to string
 * Return: count
 */

int _strlen(char *s);

#endif
