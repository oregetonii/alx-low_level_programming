#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char asc;
	int dgt = 97;

	while (dgt <= 122)
	{
		if ((dgt != 101) && (dgt != 113))
		{
			asc = (char) dgt;
			putchar(asc);
		}
		dgt++;
	}
	putchar('\n');

	return (0);
}
