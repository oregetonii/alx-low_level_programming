#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to POSIX stdio
 * @filename: file whose contents are read
 * @letters: count of letters to read and print
 *
 * Return: number of letters read and printed
 * Or 0 if unsuccessful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lett_read;
	ssize_t lett_writt;
	char *buff;
	FILE *my_file;

	/* Check 1: if filename is NULL */
	if (filename == NULL)
		return (0);
	/* Opening the file in read-only */
	my_file = fopen(filename, "r");
	/* Check 2: if file is successfully open */
	if (my_file == NULL)
		return (0);
	/* Creating a buffer to hold letters to print */
	buff = malloc(sizeof(char) * (letters + 1));
	/* Check 3: buff is null */
	if (buff == NULL)
		return (0);
	/* Reading the file contents into the buffer */
	lett_read = fread(buff, sizeof(char), letters, my_file);
	/* Close the file */
	fclose(my_file);
	/* Check 4: if contents are successfully read */
	if ((size_t) lett_read != letters)
		return (0);
	/* Print to the stdio */
	lett_writt = fwrite(buff, sizeof(char), lett_read, stdout);
	/*Check 5: write operation successful */
	if (lett_writt != lett_read)
		return (0);
	return (lett_read);
}
