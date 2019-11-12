#include "holberton.h"
/**
 * read_textfile - Read a text file
 * @filename: header of the linked list to print
 * @letters: header of the linked list to print
 * Return: number of nodes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader, writer;
	char *buffer;

	fd = open(filename, O_RDONLY);

	if ((fd == -1) | (filename == NULL))
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	buffer[letters] = '\0';

	reader = read(fd, buffer, letters);
	if (reader == -1)
	{
		return (0);
		free(buffer);
	}
	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer == -1)
	{
		return (0);
		free(buffer);
	}
	free(buffer);
	close(fd);
	return (writer);
}
