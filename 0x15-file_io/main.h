#ifndef MAIN_H
#define MAIN_H
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

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


/**
 * _file_exists - checks if a file already exists
 * @filename: the name of file
 *
 * Return: true if file exists, false otherwise
 */

bool _file_exists(const char *filename);


/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_context: data to write to the file
 *
 * Return: 1 upon success, 0 otherwise
 */
int create_file(const char *filename, char *text_content);


/**
 * _strlen - takes a pointer to char and returns length
 * @s: pointer to string
 * Return: count
 */

int _strlen(char *s);

/**
 * append_text_to_file: appends text to a file
 * @filename: name of the file
 * @text_content: data to append to the file
 *
 * Return: 1 (successful), -1 (otherwise)
 */
int append_text_to_file(const char *filename, char *text_content);



#endif
