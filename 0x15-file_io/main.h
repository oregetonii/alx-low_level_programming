#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * read_textfile - reads a text file and
 * prints it to POSIX stdio
 * @filename: file whose contents are read
 * @letters: count of letters to read and print
 *
 * Return: number of letters read and printed
 * Or 0 if unsuccessful
 */
ssize_t read_textfile(const char *filename, size_t letters);



#endif
