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

	/* Otherwise create a new file */
	file = fopen(filename, "w");
	if (! file)
		return (-1);
	/*Write contents to file */
	fwrite(text_content, sizeof(char), _strlen(text_content), file);
	return (1);
}
