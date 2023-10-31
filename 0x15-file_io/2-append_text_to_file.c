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
	int fd; 

	if (! filename)
		exit(-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		exit(-1);
	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			write(fd, text_content, sizeof(char));
			text_content++;
		}
	}
	close(fd);
	exit(1);
}
