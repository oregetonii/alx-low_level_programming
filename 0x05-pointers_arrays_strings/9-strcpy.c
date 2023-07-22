#include "main.h"

/**
 *_strcpy - copies a string
 *@src: the source of the string
 *@dest: the destination of the string
 *Return: dest
 */ 

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest++ = '\0';
	return (dest);
}
