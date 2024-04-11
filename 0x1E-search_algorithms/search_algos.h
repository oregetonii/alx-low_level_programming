#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <math.h>
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - Seaches for value in array of ints
 * using Linear search algorithm
 * @array: pointer to the array
 * @size: size of the array
 * @value: the target value
 *
 * Return: position of value if successful, -1 otherwise
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - searches for value in array using binary searh algorithm
 * @array: the array to search
 * @size: size of array
 * @value: the target
 *
 * Return: index of value, -1 otherwise
 */
int binary_search(int *array, size_t size, int value);

/**
 * jump_search - find square root, jump steps to find match, end linear search
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int jump_search(int *array, size_t size, int value);

/**
 * interpolation_search - like binary search, but use idx based on formula
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int interpolation_search(int *array, size_t size, int value);

#endif
