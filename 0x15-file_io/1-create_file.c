#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_context: data to write to the file
 *
 * Return: 1 upon success, 0 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	/* Check if the file already exists */
	if (_file_exists(filename))
	{
		truncate(filename, 0);
		return (1);
	}
	/* Otherwise create a new file */
	file = fopen(filename, "r+");
	if (! file)
		return (-1);
	/*Write contents to file */
	fwrite(text_content, sizeof(char), _strlen(text_content), file);
	return (1);
}
