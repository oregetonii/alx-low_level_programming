#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char asc;
	int dgt = 48;

	while (dgt <= 57)
	{
		asc = (char) dgt;
		putchar(asc);
		dgt++;
	}
	putchar('\n');

	return (0);
}

