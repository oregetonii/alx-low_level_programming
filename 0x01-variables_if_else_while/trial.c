#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char asc;
	int dgt;

	for (dgt = 97; dgt <= 122; dgt++)
	{
		asc = (char) dgt;
		putchar(asc);
	}

	for (dgt = 65; dgt <= 90; dgt++)
	{
		asc = (char) dgt;
		putchar(asc);
	}
	putchar('\n');

	return (0);
}
