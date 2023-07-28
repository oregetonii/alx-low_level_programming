#include <stdio.h>
#include "main.h"

/**
 * main - prints each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 
 */

int main(int argc, char *argv[])
{
	int c = 0;

	while (c < argc)
		printf("%s\n", argv[c++]);

	return (0);
}
