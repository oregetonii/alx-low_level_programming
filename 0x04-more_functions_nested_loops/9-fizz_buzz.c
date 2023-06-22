#include <stdio.h>

/**
 * main - print 1 to 100,
 * multiples of 3 with Fizz,
 * multiples of 5 with Buzz
 * and multiple of both 3 and 5 with FizzBuzz
 * Return: 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
			printf("FizzBuzz");
		else if (j % 3 == 0)
			printf("Fizz");
		else if (j % 5 == 0)
			printf("Buzz");
		else
			printf("%d", j);

		if (j < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
