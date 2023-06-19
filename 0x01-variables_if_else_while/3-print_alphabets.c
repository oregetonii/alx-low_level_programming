
#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char asc;
	int d = 97;
	int g = 65;

	while (d <= 122)
	{
		asc = (char) d;
		putchar(asc);
		d++;
	}

	while (g <= 90)
	{
		asc = (char) g;
		putchar(asc);
		g++;
	}
	putchar('\n');

	return (0);
}
