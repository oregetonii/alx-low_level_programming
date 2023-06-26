#include "main.h"

/**
 * swap_int - takes two pointers to int variables
 * swaps the two int variables
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int *temp = &a;
	*a = *b;
	*b = *temp;
}
