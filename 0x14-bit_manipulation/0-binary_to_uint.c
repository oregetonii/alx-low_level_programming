#include "main.h"

/**
 * binary_to_uint - converts a bin num to uint
 * @b: the str of 1s and 0s
 *
 * Return: converted uint num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	unsigned int num;
	unsigned int j;
	unsigned int rnum;
	unsigned int c;
	/* Check for 0 cases */
	if (b == NULL)
		return (0);
	/* Calculate length of the string */
	count = 0;
	while (*b != '\0')
	{
		if ((*b == '0')||(*b == '1'))
		{
			b++;
			count++;
		}
		else
			return (0);
	}
	/* The conversion */
	/* Case where the length of string <= 32 */
	if (count <= 8)
	{
		j = 0;
		while (count > 0)
		{
			if (b[count] == '1')
			{
				num = 1;
				while (j > 0)
				{
					num = num * 2;
					j--;
				}
			}
			else
			{
				num = 0;
			}
			rnum += num;
			j++;
			count--;
		}
	}
	else
	{
		j = 0;
		c = count;
		while (count > (c - 8))
		{
			if (b[count] == '1')
			{
				num = 1;
				while (j > 0)
				{
					num = num * 2;
					j--;
				}
			}
			else
			{
				num = 0;
			}
			rnum += num;
			j++;
			count--;
		}
	}
	return (rnum);
}
