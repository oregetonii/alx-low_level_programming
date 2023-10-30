#include "main.h"
/**
 * append_text_to_file: appends text to a file
 * @filename: name of the file
 * @text_content: data to append to the file
 *
 * Return: 1 (successful), -1 (otherwise)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	/* Check if te file doesn't exist */
	if (_file_exists(filename) == false)
		return (-1);
	file = fopen(filename, "a");
	/* Check if opened success */
	if (file == NULL)
		return (-1);
