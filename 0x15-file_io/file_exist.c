#include "main.h"

/**
 * _file_exists - checks if a file already exists
 * @filename: the name of file
 *
 * Return: true if file exists, false otherwise
 */

bool _file_exists(const char *filename)
{
	FILE *file;
	bool exists;

	file = fopen(filename, "r");
	exists = false;

	/* Check if the file opens successfully */
	if (file != NULL)
	{
		exists = true;
		fclose(file);
	}
	return (exists);
}
