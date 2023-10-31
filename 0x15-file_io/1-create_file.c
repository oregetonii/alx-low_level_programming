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
	int fd;
	/*size_t text_writt;*/

	if (filename == NULL)
		return (-1);
	/* Otherwise create a new file */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	/*Write contents to file */
	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			write(fd, text_content, sizeof(char));
			text_content++;
		}
	}
	close(fd);
	/*if ((int) text_writt != _strlen(text_content))
		return (-1);*/
	return (1);
}
