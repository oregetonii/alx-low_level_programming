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
	size_t text_writt;

	/* Otherwise create a new file */
	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	/*Write contents to file */
	text_writt = fwrite(text_content, sizeof(char), _strlen(text_content), file);
	fclose(file);
	if ((int) text_writt != _strlen(text_content))
		return (-1);
	return (1);
}
