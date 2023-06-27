#include "main.h"

/**
 * swap_int - takes two pointers to int variables
 * swaps the two int variables
 * @a: pointer to int a
 * @b: pointer to int b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
